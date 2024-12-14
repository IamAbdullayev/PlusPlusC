#include <iostream>
#include <string>

using namespace std;


/*
* 1. In the below code describe the purpose of the GameObject class. 
*    What common functionality does it provide for its derived classes?
*		 Он представляет собой базовый класс, который хранит в себе методы и данные, общие для своих производных классов.
*
*	2. Explain the concept of inheritance as demonstrated in the code. 
*    How are the Player, Enemy, and Character classes related to the GameObject class?
*		 Производные классы наследует его в формате public. То есть они наследуют все его public элементы и "скопируют" их в себе как public.
*
* 3. Identify and describe the purpose of the constructors in the derived classes (Player, Enemy, Character). 
*    How do they initialize the member variables of the derived classes and the base class?
* 4. In the main function, three objects are created: player, enemy, and character. 
*    Explain how these objects are constructed using the provided constructors.
*		 При создание одного из производных классов с параметрами вызывается впервую очередь базовый класс. То есть конструктор производного класса
*		 принимает аргумент для базового класса и для своих элементов. Далее впервую очереть аргумент базового класса передается в конструктор базового класаа
*		 и создается базовый класс. Далее второй аргумент присваеивается элементу самого произвогдного класса. 
* 
* 5. Describe the benefits of using inheritance in this scenario. 
*    How does it contribute to code organization and reusability?
*		 В данном примере наследование позволяет повторно не указывать "string name" для каждого класса.
*		 В целом так легче понять код. У тебя есть базовый класс - большая картина проекта - характеризирует общую тенденцию, образ предпологаемого объекта,
*		 а производные классы являются компонентами этой большой картины, составляющие, части ее.
*		 В нашем примере так можно представить: базовый класс - это мир, а производные - люди, животные и другие компоненты мира. 
*
* 6. Imagine you need to add a new class called Weapon that inherits from GameObject and has an additional attribute called damage. 
*    Extend the code to include the Weapon class and demonstrate its usage in the main function.
*		 Сделано, класс легко масштабируется.
*
* 7. Modify the Character class to include an additional attribute, 
*    such as experience, and update its constructor and displayInfoCharacter method accordingly. 
*    Reflect on how these changes affect the overall structure of the program.
*		 Придется указать дополнительный аргумнт в конструкторе чтобы присвоить значение к новому элементу (experience), а так в целом ничего в архитектуре не меняется,
*		 всего лишь добавляем новые элементы и всё.
*
* 8. Discuss potential improvements or alternative approaches that 
*    could be taken to design a similar system with better maintainability and extensibility.
*		 Всегда можно найти улучшение, в данном случае, думаю, для лучшей конфедициальности стоило бы использовать не  public наследование,
*		 а protected  - для инкапсуляции, чтобы предотвратить общий доступ к названиям объектов. 
*		 И еще, думаю это основной момент. Можно было использовать метод "virtual", чтобы сократить использование памяти.
*
*/

class GameObject {
    public:
        GameObject(const string& name) : name(name) {
            // Common initialization for all game objects
        }

        void displayInfo() {
            cout << "Name: " << name << "\n";
        }

    private:
        string name;
};


class Player : public GameObject {
    public:
        Player(const string& name, int health) : GameObject(name), health(health) {
            // Specific initialization for players
        }

        void displayInfoPlayer() {
            displayInfo();
            cout << "Health: " << health << "\n";
        }

    private:
        int health;
};


class Enemy : public GameObject {
    public:
        Enemy(const std::string& name, int damage) : GameObject(name), damage(damage) {
            // Specific initialization for enemies
        }

        void displayInfoEnemy() {
            displayInfo();
            cout << "Damage: " << damage << "\n";
        }

    private:
        int damage;
};


class Character : public GameObject {
    public:
        Character(const std::string& name, int level, int experience) : GameObject(name), level(level), experience(experience) {
            // Specific initialization for characters
        }

        void displayInfoCharacter() {
            displayInfo();
            cout << "Level: " << level << "\n";
            cout << "Experience: " << experience << "\n";
        }

    private:
        int level;
				int experience;
};


class Weapon : public GameObject {
    public:
        Weapon(const std::string& name, int damage) : GameObject(name), damage(damage) {
            // Specific initialization for characters
        }

        void displayInfoWeapon() {
            displayInfo();
            cout << "Damage: " << damage << "\n";
        }

    private:
        int damage;
};


int main() {

    system("clear");

    /*   Example Usage   */
    Player player("Hero", 100);
    Enemy enemy("Goblin", 20);
    Character character("Adventurer", 5, 300);
    Weapon weapon("Adventurer", 500);

    player.displayInfoPlayer();
    cout << endl;

    enemy.displayInfoEnemy();
    cout << endl;

    weapon.displayInfoWeapon();
    cout << endl;

		character.displayInfoCharacter();
    cout << endl;

    /*
        [Output]
        
        Name: Hero
        Health: 100

        Name: Goblin
        Damage: 20

        Name: Adventurer
        Level: 5

    		Name: Adventurer
				Damage: 500

				Name: Adventurer
				Level: 5
				Experience: 300
		*/

    return 0;
}