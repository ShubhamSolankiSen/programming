#include <iostream>
using namespace std;

class Student
{
protected:
    int roll_number;

public:
    void set_number(int a)
    {
        roll_number = a;
    }
    void print_number()
    {
        cout << "Your roll_number is " << roll_number << endl;
    }
};

class Test : virtual public Student
{
protected:
    float Maths, Physics;

public:
    void set_marks(float m1, float m2)
    {
        Maths = m1;
        Physics = m2;
    }
    void print_marks()
    {
        cout << "Your result is here:" << endl
             << " Maths " << Maths << endl
             << " Physics " << Physics << endl;
    }
};

class Sports : virtual public Student
{
protected:
    float score;

public:
    void set_score(float sc)
    {
        score = sc;
    }
    void print_score()
    {
        cout << "Your PT score is here:" << endl;
    }
};

class Result : public Sports, public Test
{
private:
    float total;

public:
    void display(void)
    {
        total = Maths + Physics + score;
        print_number();
        print_marks();
        print_score();
        cout << "Your total score is :" << total << endl;
    }
};

int main()
{
    Result Shubham;
    Shubham.set_marks(99.99,99.67);
    Shubham.set_number(104232857);
    Shubham.set_score(9);
    Shubham.display();

    return 0;
}