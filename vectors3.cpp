#include<iostream>
#include<vector>

using namespace std;

template <class T>
void display(vector<T> v){      //for considering parameters of vectors of any data type
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int ele,size;
    // cout<<"Enter the size of the vector: ";
    // cin>>size;
    vector<int> vec1;      //zero length interger vector
    vector<char> vec2(4);  //4-element chracter vector
    vector<int> vec4(6,3);    //6-element integer vector of 3s
    vec2.push_back('5');

    vector<char> vec3(vec2);   //4-element chracter vector from vec2
    display(vec3);

    // for (int i = 0; i < size; i++)
    // {
    //     cout<<"ADD AN ELEMENT TO ADD TO THIS VECTOR: ";
    //     cin>>ele;
    //     vec1.push_back(ele);
    // }

    // vector<int> :: iterator iter = vec1.begin();    for defining the position
    //  vec1.insert(iter, 566);      for inserting elements in specific positions of the vector

    // vec1.insert(iter,5, 566);   for inserting the number 5 times


    // display(vec1);
    return 0;
}