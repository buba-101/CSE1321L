#include <iostream>

using namespace std;

class Dog
{
  public:

    int age;
    double weight;
    string name;
    string fur_color;
    string breed;

    //constructor
    Dog(int a, double w, string n, string f, string b)
    {
       age = a;
       weight = w;
       name = n;
       fur_color = f;
       breed = b;
    }

    //methods or fxns
    void bark()
    {
      cout << "Woof! Woof!\n";
    }
    
    string rename(string new_name)
    {
      name = new_name;
      return name;
    }
    
    double eat(double w)
    {
      weight += w;
      return weight;
    }
  
};

int main() 
{
  int age;
  double weight;
  string name;
  string fur_color;
  string breed;
  string new_name;
  
  cout << "You are about to create a dog\n";
  
  cout << "How old is the dog: ";
  cin >> age;
  
  cout << "How much does the dog weigh: ";
  cin >> weight;
  
  cout << "What is the dog's name: ";
  cin >> name;
  
  cout << "What color is the dog: ";
  cin >> fur_color;
  
  cout << "What breed is the dog: ";
  cin >> breed;

  //creating a dog using pointer
  Dog* d1 = new Dog(age, weight, name, fur_color, breed);

  cout << endl << d1->name << " is a " << d1->age << " year old " << d1->fur_color << " " << d1->breed << " that weighs " << d1->weight << " lbs.\n\n";

  //bark
  d1->bark();

  cout << d1->name << " is hungry, how much should he eat: ";
  cin >> weight;

  // increase wight
  d1->eat(weight);
  
  cout << d1->name << " isn't a very good name. What should they be renamed to: ";
  cin >> new_name;

  //rename dog
  d1->rename(new_name);
  
  cout << endl << d1->name << " is a " << d1->age << " year old " << d1->fur_color << " " << d1->breed << " that weighs " << d1->weight << " lbs.";
  
}