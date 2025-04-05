#include <iostream>
using namespace std;

struct Person {
    string name;
    int age;
};

void printPerson(Person* p) {
    cout << "Name: " << p->name << ", Age: " << p->age << endl;
}

int main() {
    Person* person = new Person;

    person->name = "Alice";
    person->age = 25;

    printPerson(person);

    person->name = "Bob";
    person->age = 30;

    printPerson(person);

    delete person;
    return 0;
}
