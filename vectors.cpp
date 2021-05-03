// for adding elements

#include<iostream>
#include<vector>

using namespace std;

void display(vector<int> v){
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int ele,size;
    cout<<"Enter the size of the vector: ";
    cin>>size;
    vector<int> vec1;
    for (int i = 0; i < size; i++)
    {
        cout<<"ADD AN ELEMENT TO ADD TO THIS VECTOR: ";
        cin>>ele;
        vec1.push_back(ele);
    }
    display(vec1);
    return 0;
}