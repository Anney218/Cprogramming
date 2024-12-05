            //12. POSITION OF THE MAX
            #include<stdio.h>
            int main(){
            int rrow,ccol;
            printf("\nPOSITION OF HIGHEST\nEnter no. of rows and columns : ");
            scanf("%d %d",&rrow,&ccol);

            int M[rrow][ccol];
            for(int i=0; i<rrow; i++)
            {
               for(int j=0; j<ccol; j++)
               {
                   printf("M[%d][%d] = ",i,j);
                   scanf("%d",&M[i][j]);
               }
            }

            int largestt = M[0][0];
            int maxRow = 0;
            int maxCol = 0;

            for(int i=0; i<rrow; i++)
            {
                for(int j=0; j<ccol; j++)
                {
                    if(M[i][j]>largestt)
                    {
                        largestt = M[i][j];
                        maxRow = i;
                        maxCol = j;
                    }
                }
            }
            printf("The largest element = %d is at position (%d,%d)\n",largestt,maxRow,maxCol);
            return 0;
            }
