Sealed Classes and Interfaces
Sealed Classes
A class is sealed using the keyword sealed.
When a base class is sealed, it must declare which specific classes are permitted to extend it.
Only the classes explicitly permitted by the base class can extend that sealed class.
Derived classes extending a sealed class can choose to be sealed themselves or non-sealed.
Sealed Interfaces
Similar to sealed classes, an interface can be sealed using the sealed keyword.
A sealed interface declares which specific classes or interfaces are permitted to implement or extend it.
Only the permitted classes/interfaces can use the sealed interface and override its abstract methods.
Key Concepts
The core idea behind sealed is to allow a class or interface to define a controlled hierarchy, specifying exactly which types are allowed to inherit from it.
This acts as a constraint on permitted subclasses/implementations.
Derived classes must directly extend the sealed class or implement the sealed interface if they are on the permitted list.