# UVA
This is the record my coding UVA program question practice
Consider a company that needs to sort an array Person data[10] of structure of type Person by name.

struct Person

{

string name;

int age;

}

In real life the Person structures may have many members and occupy a large area of memory, making it computationally expensive to move Person objects around while sorting. You can define an auxiliary array Person \*pData[10], setting each entry of pData[k] to point to the corresponding entry of data[k]. Write a program that sorts the array of pointers so that when you go through pData in increasing order of index k, the entries pData[k] point to Person objects in ascending alphabetic order of names.

For example:
|Input|Output|
|-----|------|
|Mary 20 <br> Alice 30 <br> Jenny 26 <br> Angela 23 <br> Peter 40 <br> John 45 <br> Josef 32 <br> Jon 27 <br> Kenneth 42 <br> Helen 25 | Alice 30 <br> Angela 23 <br> Helen 25 <br> Jenny 26 <br> John 45 <br> Jon 27 <br> Josef 32 <br> Kenneth 42 <br> Mary 20 <br> Peter 40|
