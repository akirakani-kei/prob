///316

#include <iostream>

using namespace std;

int main()

{
    int n, i, j, k, v[100], nou=0, cmax=0, pal=0;

    cin>>n;
    for(i=1;i<=n;i++)
        cin>>v[i];



        for(i=1;i<n;i++)
            for(j=n;j>i;j--)
            {
                if(v[i]==v[j])

                {
                    nou=0;
                    pal=0;

                    for(k=j;k>=i;k--)
                    pal=pal*10+v[k];

                    for(k=i;k<=j;k++)
                    nou=nou*10+v[k];

                if(nou==pal && (j-i+1)>cmax)
                {
                    if(cmax<(j-i+1))
                        cmax=j-i+1;
                }

                }

            }

            cout<<cmax;

    return 0;
}
