const person = {
    firstName: "John",
    lastName: "Doe",
    age: 30,
    isEmployed: true,
    greet: function() {
        console.log(`Hello, my name is ${this.firstName} ${this.lastName}.`);
    }
};

// Example usage:
person.greet();

//object of objects
const car = {
    make: "Toyota",
    model: "Camry",
    year: 2020,
    features: {
        color: "blue",
        transmission: "automatic",
        hasSunroof: true
    },
    displayInfo: function() {
        console.log(`Car: ${this.make} ${this.model}, Year: ${this.year}`);
        console.log(`Features: Color - ${this.features.color}, Transmission - ${this.features.transmission}, Sunroof - ${this.features.hasSunroof}`);
    }
};
// Example usage:
car.displayInfo();

// Object of objects example
const library = {
    sectionA: {
        name: "Fiction",
        books: 120
    },
    sectionB: {
        name: "Science",
        books: 80
    },
    sectionC: {
        name: "History",
        books: 60
    }
};

console.log(library.sectionA.name); // Output: Fiction
console.log(library.sectionB.books); // Output: 80

const myhonda={color:"red",wheels:4, engine:"V6",features:{sunroof:true,leatherSeats:true},
displayInfo:function()
{console.log(`Honda Details: Color - ${this.color}, Wheels - ${this.wheels}, Engine - ${this.engine}`);console.log(`Features: Sunroof - ${this.features.sunroof}, Leather Seats - ${this.features.leatherSeats}`);}};
console.log(myhonda.color); // Output: red
console.log(myhonda.features.sunroof); // Output: true

myhonda.displayInfo(); // Output: Honda Details: Color - red, Wheels - 4, Engine - V6
// Object with nested objects
