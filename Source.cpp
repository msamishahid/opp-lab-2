#include <iostream>
using namespace std;

class Animal {
public:
   
    virtual void makeSound() const = 0;
};

class Lion : public Animal {
public:
    void makeSound() const override {
        cout << "Roar" << endl;
    }
};

class Elephant : public Animal {
public:
    void makeSound() const override {
        cout << "Trumpets" << endl;
    }
};

class Monkey : public Animal {
public:
  
    void makeSound() const override {
        cout << "Ooh Ooh Ahh Ahh" << endl;
    }
};

class Bird : public Animal {
public:
    void makeSound() const override {
        cout << "Tweet Tweet" << endl;
    }
};

void hearSound(const Animal& animal) {
    animal.makeSound();
}

int main() {
    
    Lion lion;
    Elephant elephant;
    Monkey monkey;
    Bird bird;

    cout << "Sound of Lion: ";
    hearSound(lion);

    cout << "Sound of Elephant: ";
    hearSound(elephant);

    cout << "Sound of Monkey: ";
    hearSound(monkey);

    cout << "Sound of Bird: ";
    hearSound(bird);

    return 0;
}
