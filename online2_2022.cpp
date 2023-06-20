#include <bits/stdc++.h>
using namespace std;
// virtual class - Person
class Person
{
    int id;

protected:
    string name, email;
    double contact;

public:
    virtual void display() = 0;
    virtual void add_membar() = 0;
    Person(int id, string name, string email, double contact)
    {
        this->id = id;
        this->name = name;
        this->email = email;
        this->contact = contact;
    }
    void set_id(int id)
    {
        this->id = id;
    }
    Person() {}
    virtual ~Person() {}
};
class Student_member : virtual public Person
{
private:
    int level;

protected:
    string dept;

public:
    Student_member() {}
    void display()
    {
        cout << level << " " << dept << endl;
    }
    Student_member(int level, string dept, int id, string name, string email, double contact) : Person(id, name, email, contact)
    {
        this->level = level;
        this->dept = dept;
    }
    void add_membar()
    {
        cout << "Enter level" << endl;
        cin >> level;
        cout << "Enter dept" << endl;
        cin >> dept;
        int x;
        cout << "Enter id" << endl;
        cin >> x;
        set_id(x);
        cout << "Enter name" << endl;
        cin >> name;
        cout << "Enter email" << endl;
        cin >> email;
        cout << "Enter contact" << endl;
        cin >> contact;
    }
    ~Student_member() {}
};
class Faculty_member : virtual public Person
{
    string faculty_name;

protected:
    string designation;

public:
    Faculty_member() {}
    virtual void display()
    {
        cout << faculty_name << " " << designation << endl;
    }
    Faculty_member(string faculty_name, string designation, int id, string name, string email, double contact) : Person(id, name, email, contact)
    {
        this->designation = designation;
        this->faculty_name = faculty_name;
    }
    void add_membar()
    {

        cout << "Enter faculty name" << endl;
        cin >> faculty_name;
        cout << "Enter designation" << endl;
        cin >> designation;
        int x;
        cout << "Enter id" << endl;
        cin >> x;
        set_id(x);
        cout << "Enter name" << endl;
        cin >> name;
        cout << "Enter email" << endl;
        cin >> email;
        cout << "Enter contact" << endl;
        cin >> contact;
    }
    ~Faculty_member() {}
};
class Research_Faculty_member : public Faculty_member, public Student_member
{
    string research_domain;

protected:
    int num_of_publications;

public:
    Research_Faculty_member() {}
    void display()
    {
        cout << research_domain << " " << num_of_publications << endl;
    }
    Research_Faculty_member(string research_domain, int num_of_publications, string faculty_name, string designation, int level, int id, string name, string email, double contact) : Person(id, name, email, contact), Student_member(level, dept, id, name, email, contact), Faculty_member(faculty_name, designation, id, name, email, contact)
    {
        this->research_domain = research_domain;
        this->num_of_publications = num_of_publications;
    }
    void add_membar()
    {
        string faculty_name;
        string designation;
        int id;
        string name;
        string email;
        double contact;
        int level;
        string dept;
        cout << "Enter level" << endl;
        cin >> level;
        cout << "Enter dept" << endl;
        cin >> dept;
        cout << "Enter faculty name" << endl;
        cin >> faculty_name;
        cout << "Enter designation" << endl;
        cin >> designation;
        cout << "Enter id" << endl;
        cin >> id;
        cout << "Enter name" << endl;
        cin >> name;
        cout << "Enter email" << endl;
        cin >> email;
        cout << "Enter contact" << endl;
        cin >> contact;
    }
};
class Books
{
    int id;

protected:
    string title, author;
    int price, quantity;

public:
    Books() {}
    void operator++(int)
    {
        quantity++;
    }
    void operator+=(int x)
    {
        quantity += x;
    }
    void operator-(int x)
    {
        quantity -= x;
    }

    Books(int id, string title, string author, int price, int quantity)
    {
        this->id = id;
        this->title = title;
        this->author = author;
        this->price = price;
        this->quantity = quantity;
    }
    void display()
    {
        cout << id << " " << title << " " << author << " " << price << " " << quantity << endl;
    }
    void add_book()
    {
        cout << "Enter id" << endl;
        cin >> id;
        cout << "Enter title" << endl;
        cin >> title;
        cout << "Enter author" << endl;
        cin >> author;
        cout << "Enter price" << endl;
        cin >> price;
        cout << "Enter quantity" << endl;
        cin >> quantity;
    }
};
class Books_issue : public Person, public Books
{
protected:
    string date_issued;

public:
    Books_issue() {}
    Books_issue(int id, string title, string author, int price, int quantity, string name, string email, double contact, string date_issued) : Person(id, name, email, contact), Books(id, title, author, price, quantity)
    {
        this->date_issued = date_issued;
    }
    void display() {}
    void add_membar()
    {
    }
    void issue()
    {
        int x;
        cout << "Enter id" << endl;
        cin >> x;
        set_id(x);
        cout << "Enter title" << endl;
        cin >> title;
        cout << "Enter author" << endl;
        cin >> author;
        cout << "Enter price" << endl;
        cin >> price;
        cout << "Enter quantity" << endl;
        cin >> quantity;
        cout << "Enter date_issued" << endl;
        cin >> date_issued;
        cin >> name;
        cin >> email;
        cin >> contact;
    }
};
class Books_return : public Person, public Books
{
protected:
    int days_held;

public:
    Books_return() {}
    operator int()
    {
        return days_held > 30 ? (days_held - 30) * 3 : 0;
    }
    void add_membar()
    {
    }
    void display()
    {
    }
    Books_return(int id, string title, string author, int price, int quantity, string name, string email, double contact, int days_held) : Person(id, name, email, contact), Books(id, title, author, price, quantity)
    {
        this->days_held = days_held;
    }
    void return_b()
    {
        int x;
        cout << "Enter id" << endl;
        cin >> x;
        set_id(x);
        cout << "Enter title" << endl;
        cin >> title;
        cout << "Enter author" << endl;
        cin >> author;
        cout << "Enter price" << endl;
        cin >> price;
        cout << "Enter quantity" << endl;
        cin >> quantity;
        cin >> days_held;
        cin >> name;
        cin >> email;
        cin >> contact;
    }
};
void show_mem_info(Person *p)
{
    p->display();
}
int main()
{
    Faculty_member f;
    f.add_membar();
    show_mem_info(&f);

    Student_member s;
    s.add_membar();
    show_mem_info(&s);
}