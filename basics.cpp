#include<iostream>
#include<vector>

using namespace std;

int main(void){

    // Vector declaration (dynamically!) with size 2
    int n = 2;
    vector<int> vetor(n);

    // Assigning values ​​to the vector
    vetor[0] = 0;
    vetor.at(1) = 1;
    vetor.push_back(2);             // Increasing the size of the vector,
                                    // putting the value 2 in position 2 
                                    // (now the vector has size 3)

    vetor.insert(vetor.end(), 3);   // Also increasing the size of the vector

    // Looping like C
    printf("Looping like C: ");
    for(int i = 0; i < 4; i++){
        printf("%d, ", vetor[i]);
    }

    printf("\n");

    // Looping like C++
    printf("Looping like C++: ");
    for(size_t element : vetor){ 
        printf("%ld, ", element);
    }

    cout << endl;

    printf("Also looping like C++: ");
    for(size_t i = 0; i < vetor.size(); i++){
        cout << vetor.at(i) << ", ";
    }
    cout << endl;
}