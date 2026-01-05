#include <vector>
#include <string>
#include <iostream>
class Person {
public:
 std::string name;
 int age;
 Person(const std::string& name, int age) : name(name), age(age) {}
};
int main() {
 std::vector<Person> people;
 // Using push_back
 Person p("ABC", 30);
 Person p1("zeb",100);
 people.push_back(p); // Copies p into the vector
 people.push_back(p1);// Copies p1 into the vector
 people.emplace_back("Armaan", 125); // Constructs Person("Bob", 25) directly in the vector
 people.emplace_back("Bhawani", 251);
 // Print the contents of the vector
 for (const auto& person : people) {
 std::cout << "Name: " << person.name << ", Age: " << person.age << std::endl;
 }
 return 0;
}