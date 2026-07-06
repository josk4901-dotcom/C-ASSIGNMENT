//BCS-05-0070/2025 JOSHUA LILA
#include <iostream>
#include <string>
using namespace std;

// Base class
class Person
{
protected:
    string name;

public:
    Person(string n = "")
    {
        name = n;
    }

    void setName(string n)
    {
        name = n;
    }

    string getName()
    {
        return name;
    }
};

// Derived class
class LibraryMember : public Person
{
private:
    int memberID;
    int booksBorrowed;

public:
    LibraryMember(string n, int id, int books)
        : Person(n)
    {
        memberID = id;
        booksBorrowed = books;
    }

    int getMemberID()
    {
        return memberID;
    }

    int getBooksBorrowed()
    {
        return booksBorrowed;
    }
};

// Second derived class
class PremiumMember : public LibraryMember
{
private:
    double membershipFee;

public:
    PremiumMember(string n, int id, int books, double fee)
        : LibraryMember(n, id, books)
    {
        membershipFee = fee;
    }

    double getMembershipFee()
    {
        return membershipFee;
    }
};

int main()
{
    PremiumMember member("Joshua", 101, 5, 2500.50);

    cout << "Name: " << member.getName() << endl;
    cout << "Member ID: " << member.getMemberID() << endl;
    cout << "Books Borrowed: " << member.getBooksBorrowed() << endl;
    cout << "Membership Fee: " << member.getMembershipFee() << endl;

    return 0;
}
