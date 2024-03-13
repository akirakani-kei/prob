#include <fstream>

using namespace std;

ifstream f("3secv.in");
ofstream g("3secv.out");

int functie(int v[], int n) {
    int lungime;
    short lungimemax = 0;
    short distincte = 0;
    bool streetcred = true;

    int left, right;
    for(left=0;left<n;left++)
        for(right=n-1;right>=0;right--)
            {
                distincte=0;
                for(int sandel=left;sandel<=right;sandel++)
                {
                    streetcred=true;
                    for(int sandel2=left;sandel2<sandel;sandel2++)
                        if(v[sandel2]==v[sandel])
                        {
                            streetcred=false;
                            sandel2=sandel;
                        }
                            

                    if(streetcred)
                    distincte++;

                }

                if(distincte<=3)
                {
                    lungime=right-left+1;
                    if(lungime>lungimemax)
                    lungimemax=lungime;
                    break;
                }
    
            }   
    return lungimemax;
}

int main() {
    int n, t;
    f >> t;
    for (int z = 0; z < t; z++) {
        f >> n;

        int v[100];
        for (int i = 0; i < n; i++)
            f >> v[i];
        
        short rezultat = functie(v, n);
        g << rezultat << endl;

    
    }


    f.close();
    g.close();

    return 0;
}
