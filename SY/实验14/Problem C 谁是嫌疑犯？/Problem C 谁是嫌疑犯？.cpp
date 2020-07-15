#include <iostream>

int main (void)
{
    using namespace std;

    int A, B, C, D, E, F, k;

    for(A = 0; A <= 1; A++)
    {
        for(B = 0; B <= 1; B++)
        {
            if((A | B) == 1){
                C = B;
                D = C ^ 1;
                if((A ^ D) == 1){
                    for(E = 0; E <= 1; E++)
                    {
                        if(!(D == 0&&E == 1)){
                            for(F = 0; F <= 1; F++)
                            {
                                if((A | E) & (A | F) & (E | F)){
                                    k = 0;
                                    if(A == 1){
                                        cout << "A";
                                        k++;
                                    }
                                    if(B == 1){
                                        if(k > 0){
                                            cout << " ";
                                        }
                                        cout << "B";
                                        k++;
                                    }
                                    if(C == 1){
                                        if(k > 0){
                                            cout << " ";
                                        }
                                        cout << "C";
                                        k++;
                                    }
                                    if(D == 1){
                                        if(k > 0){
                                            cout << " ";
                                        }
                                        cout << "D";
                                        k++;
                                    }
                                    if(E == 1){
                                        if(k > 0){
                                            cout << " ";
                                        }
                                        cout << "E";
                                        k++;
                                    }
                                    if(F == 1){
                                        if(k > 0){
                                            cout << " ";
                                        }
                                        cout << "F";
                                        k++;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }

    return 0;
}
