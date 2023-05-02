#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//implementing min heap
template<typename T>
class Element(){
    public:
        T val;
        int priority;
        Element(T val, int priority){
            this.val = val;
            this.priority = priority;
        }
}

template<class Element>
class PriorityQueue(){
    public:
    PriorityQueue()
        vector<Element> v;
        
        // add a new element
        // delere element
        // get max
        T getMax(vector<Element> v){
            return v[0].val;
        }

        void addElem(vector<Element> v, int priority, T val){
            Element e = new Element(val, priority);
            v.push(e);
            // check with parent with less priority on top
            int currPos = v.size()-1;
            int parent = ( currPos - 1 )/2;
            while(parent > 0){
                if(v[parent].priority >= v[currPos].priority){
                    break;
                    return;
                }
                // swap these two elements; and make curr pos and parent pos change
                // swap these elements
                Element temp;
                temp = v[currPos];
                v[currPos] = v[parent];
                v[parent] = temp;
                currPos = parent;
                parent = (currPos-1)/2;
            }
            return;
        }
}


int main(){

}