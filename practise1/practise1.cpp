﻿#include <iostream>
#include <string>
#include "Person.h"
using namespace std;

int main()
{
	Person person1("A123456789", "Chen", "Jason", "M", "1990-01-01");

	Person person2 = new Person();
	person2->setId("B987654321");
	person2->setLastName("Wang");
	person2->setFirstName("Dabid");
	person2->setGender("M");
	person2->setBirthDate("1999-12-31");

	person1.display();

	
}