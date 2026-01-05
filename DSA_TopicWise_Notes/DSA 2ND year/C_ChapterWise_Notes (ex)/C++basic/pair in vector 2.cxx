//emplace_back vs. push_back
//push_back: Adds an element to the end of the vector by copying or moving 
//the element into the vector.
//emplace_back: Constructs the element directly in the memory allocated for 
//the vector, using the arguments provided.
//push_back 
#include <vector>
#include <string>
class Person {
public:
 std::string name;
 int age;
 Person(const std::string& name, int age) : name(name), age(age) {}
 //This is a constructor for the Person class that takes two 
 //parameters: a constant reference to a std::string and an int.
 //: name(name), age(age) {}: This is the member initializer list, 
 //which initializes the member variables name and age with the 
 //values passed to the constructor.
};
int main() {
 std::vector<Person> people;
 //This declares a vector named people that will store objects of type Person.
 // Using push_back
 Person p("xyz", 300);
 //This creates a Person object named p with the name "Alice" and age 30.
 people.push_back(p); // Copies p into the vector
 //This adds the Person object p to the end of the people vector. 
 //The push_back method copies the object p into the vector.
 return 0;
}