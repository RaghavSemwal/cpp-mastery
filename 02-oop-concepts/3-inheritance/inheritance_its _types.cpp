 /* Inheritance in C++ allows one class (derived class) to reuse and extend the properties of another class (base class).
 There are five main types: Single, Multilevel, Multiple, Hierarchical, and Hybrid inheritance.
 These forms define how classes relate and share functionality in object‑oriented programming


What is Inheritance?
Base Class → The parent class whose members are inherited.

Derived Class → The child class that inherits members of the base class.

Visibility Modes → Public, Protected, Private (control how members are inherited).

Purpose → Promotes code reusability, reduces redundancy, and supports polymorphism.


| Type                      | Structure                          | Example                                                       | Key Point                                   |
|------------------------   |------------------------------------|---------------------------------------------------------------|---------------------------------------------|
| **Single Inheritance**    | One base → One derived             | class Dog : public Animal {}                                  | Simplest form, one‑to‑one relationship      |
|**Multilevel Inheritance*  | Base → Derived → Further Derived   | class Car : public FourWheeler : public Vehicle {}            | Chain of inheritance, multiple levels       |
|**Multiple Inheritance**   | One derived → Multiple bases       | class AmphibiousVehicle : public LandVehicle, public WaterVehicle {}| Derived class inherits from more than one base |
|**Hierarchical Inheritance*| One base → Multiple derived        | class Car : public Vehicle; class Bus : public Vehicle;       | Several subclasses share the same base      |
| **Hybrid Inheritance**    | Combination of two or more types   | Mix of hierarchical + multiple inheritance                    | Complex relationships, may cause ambiguity  |
 */