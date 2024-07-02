#include <iostream>;

//Global Bool Handlers
bool gameIsRunning = true;
bool playerTurn = true;

//Fighter Stats
const int maxHealth = 30;
int currentHealth = 30;
char playerState = 'a';

int enemyCurrentHealth = 30;
char enemyState = 'a';

//Action Functions
void PlayerActionSelector();
void EnemyActionSelector();
int Heal();



int main() {
	bool winState;

	//Game Loop
	while (gameIsRunning) {
		if (playerTurn) {

			if (currentHealth > 0) {
				playerTurn = false;
				PlayerActionSelector();

			}
			else if (currentHealth <= 0) {
				winState = false;
			}

		}
		else if (!playerTurn) {
			if (enemyCurrentHealth > 0) {
				playerTurn = true;
				EnemyActionSelector();
			}
			else if (enemyCurrentHealth <= 0) {
				winState = true;
				break;
			}
		}
	}
	if (winState) {
		std::cout << "You Win!\n";
		system("pause");
	}
	else if (!winState) {
		std::cout << "You Died\n";
		system("pause");
	}
		
}

//Function declarations:

int Heal() {
	int healAmount = rand() % 5 + 1;
	return healAmount;
}

void PlayerActionSelector() {
	int atkDmg = rand() % 7 + 1;
	char input;

	std::cout << "||Health: "<< currentHealth << "||\t" << "||Enemy Health: " << enemyCurrentHealth << "||\n" << "[a = ATTACK][d = DEFEND][h = HEAL]\n";
	std::cin >> input;

	switch (input) {
	case 'a':
		playerState = 'a';
		if (enemyState == 'd') {
			system("CLS");
			std::cout << "The enemy's shield blocks your attack\n";
			break;
		} else {
			system("CLS");
			std::cout << "You attack dealing [" << atkDmg << "] damage.\n";
			enemyCurrentHealth = enemyCurrentHealth - atkDmg;
		}
		break;

	case 'd':
		playerState = 'd';
		system("CLS");
		std::cout << "You ready your shield\n";
		break;

	case 'h':
		if (currentHealth >= maxHealth) {
			currentHealth = maxHealth;
			system("CLS");
			std::cout << "You are at Max Health\n";
			PlayerActionSelector();
			break;

		} else {
			playerState = 'h';
			system("CLS");
			int healAmount = Heal();
			std::cout << "You heal for [" << healAmount << "] HP\n";
			//adjust health
			currentHealth = currentHealth + healAmount;
			//check to avoid health going over max
			if (currentHealth >= maxHealth) {
				currentHealth = maxHealth;
			}
			break;
		}

	default:
		system("CLS");
		std::cout << "Choose a valid action\n";
		PlayerActionSelector();
	}
}

void EnemyActionSelector() {
	
	int atkDmg = rand() % 7 + 1;

	int enemyActionNum = rand() % 3 + 1;
	switch(enemyActionNum)	{
		case 1:
			enemyState = 'a';
			if (playerState == 'd') {
				std::cout << "Your shield blocks the attack\n";
				break;
			}
			else {
				std::cout << "You were attacked for [" << atkDmg << "] damage\n";
				currentHealth = currentHealth - atkDmg;
				break;
			}
		case 2:
			enemyState = 'd';
			std::cout << "Enemy Defending\n";
			break;

		case 3:
			//check if health is already full, pick another action if true
			if (enemyCurrentHealth >= maxHealth) {
				enemyCurrentHealth = maxHealth;
				EnemyActionSelector();
			}
			else {
				enemyState = 'h';
				//set heal amount (random 1-5)
				int healAmount = Heal();
				std::cout << "Enemy Healed for [" << healAmount << "] HP\n";
				//adjust health
				enemyCurrentHealth = enemyCurrentHealth + healAmount;
				//check to avoid health going over max
				if (enemyCurrentHealth >= maxHealth) {
					enemyCurrentHealth = maxHealth;
				}
				break;
			}
	}
}