//#include <stdio.h>
//int main(){
//    int i,j,lim=5;
//
//    for(i=1;i<=lim;i++){
//        for(j=1;j<=lim*2;j++){
//            if(j<=i || j>lim*2-i){
//                printf("* ");
//            }else{
//                if(j<=lim){
//                printf("  ");
//                }else{
//                    printf(" ");
//                }
//            }
//        }printf("\n");
//    }
//
//
//}

//include <stdio.h>
//
//nt main(){
//   int i,j,lim=5,p=0;
//   for(i=1;i<=lim;i++){
//       for(j=i;j<=lim;j++){
//           printf("  ");
//       }
//       for(j=1;j<=i*2-1;j++){
//           if(j<=(i*2-1)/2+1){
//               p++;
//           }else{
//               p--;
//           }
//           printf("%d ",p);
//       }printf("\n");
//   }
//

//#include <stdio.h>
//int main(){
//    int i,j,lim=5,p;
//
//    for(i=1;i<=lim;i++){
//        p=i;
//        for(j=i;j<lim;j++){
//            printf("  ");
//        }
//        for(j=1;j<=i*2-1;j++){
//            if(j<=(i*2-1)/2+1){
//                p--;
//            }else{
//                p++;
//            }
//            printf("%d ",p);
//
//        }printf("\n");
//    }
//
//
//}

//#include <stdio.h>
//int main(){
//
//    int i,j,lim=6;
//
//    for(i=1;i<=lim;i++){
//        
//        for(j=1;j<=lim*2-1;j++){
//
//           
//           if(j>lim-i && j<lim+i){
//               printf("* ");
//           }else{
//               printf("  ");
//           }
//           
//        }printf("\n");
//    }
//    for(i=1;i<lim;i++){
//        
//        for(j=1;j<=lim*2-1;j++){
//
//           
//           if(j>i && j<=lim*2-1-i){
//               printf("* ");
//           }else{
//               printf("  ");
//           }
//           
//        }printf("\n");
//    }
//}


//#include <stdio.h>
//int main(){
//    int i,j,lim=5,p=0;
//    for(i=1;i<=lim*2-1;i++){
//                if(i<=lim){
//                    p++;
//                }else{
//                    p--;
//                }
//    
//        for(j=1;j<=lim*2-1;j++){
//            if(i==j || j==lim*2-i ){
//               
//
//                printf("%d",p);
//            }else{
//                printf(" ");
//            }
//        }printf("\n");
//    }
//}

//#include <stdio.h>
//int main(){
//    int j,i,lim=9,p=0;
//
//    for(i=1;i<lim;i++){
//        p=0;
//        for(j=1;j<=i*2-1;j++){
//            
//            if(j==1 || j==i*2-1 ){
//                printf("*");
//            }else{
//                if(j<=(i*2-1)/2+1){
//                    p++;
//                }else{
//                    p--;
//                }
//                printf("%d",p);
//            }
//        }printf("\n");
//    }
//    for(i=lim;i>=1;i--){
//        p=0;
//
//        for(j=1;j<=i*2-1;j++){
//            if(j==1 || j==i*2-1 ){
//                printf("*");
//            }else{
//                 if(j<=(i*2-1)/2+1){
//                    p++;
//                }else{
//                    p--;
//                }
//                printf("%d",p);
//            }
//        }printf("\n");
//    }
//}



//#include <stdio.h>
//int main(){
//    int i,j,lim=5;
//
//    for(i=1;i<=lim;i++){
//        for(j=1;j<=lim*2-(i*2-1);j++){
//           if(j>lim-i){
//                printf("*");
//            }else{
//                printf(" ");
//            }
//        }printf("\n");
//    }for(i=2;i<=lim;i++){
//        for(j=1;j<=i*2-1;j++){
//            if(j>=i){
//                printf("*");
//            }else{
//                printf(" ");
//            }
//        }printf("\n");
//    }
//}


//#include <stdio.h>
//int main(){
//    int i,j,lim=6;
//    for(i=1;i<=lim-2;i++){
//        for(j=1;j<=lim*2-1;j++){
//            if(j<=i*2-1 || j>lim*2-1-(i*2-1)){
//                printf("* ");
//            }else{
//                printf("  ");
//            }
//        }printf("\n");
//    }
//}

//#include <stdio.h>
//
//int main(){
//    int i,j,lim=3,p=0;
//    for(i=1;i<=lim;i++){
//        for(j=1;j<=i;j++){
//            printf("%d %d\n",i,i);
//        }
//        for(j=1;j<=2*(i+1);j++){
//            p++;
//            printf("%d ",p);
//            
//        }printf("\n");
//    }
//    
//}

//#include <stdio.h>
//int main(){
//    int i,j,lim=9,flag,n,arr[100]={4,5,3,4,2,7,4,5,8};
//
//   
//
//    for(i=0;i<lim;i++){
//        flag=0;
//       
//       for(j=0;j<lim;j++){
//        if(i!=j && arr[i]==arr[j]){
//            for(n=j;n<lim-1;n++){
//                arr[n]=arr[n+1];
//                flag=1;
//            }
//            j--;
//            lim--;
//        }
//       }if(flag==1){
//        for(j=i;j<lim-1;j++){
//            arr[j]=arr[j+1];
//        }
//        i--;
//        lim--;
//       }
//        
//    }
//
//    for(i=0;i<lim;i++){
//        printf("%d ",arr[i]);
//    }
//
//    
//}

//#include <stdio.h>
//int main(){
//    int i,j,arr[100]={2,3,4,5,6,6,7,3,3,3},lim=10,count,m;
//
//    
//
//    for(i=0;i<lim;i++){
//        count=1;
//        for(j=0;j<lim;j++){
//            if(i!=j && arr[i]==arr[j]){
//                count++;
//                for(m=j;m<lim-1;m++){
//                    arr[m]=arr[m+1];
//                }
//                j--;
//                lim--;
//
//            }
//        }if(count>1){
//            printf("%d is %d time repeated\n",arr[i],count);
//        }
//    }
//}

//#include <stdio.h>
//
//int main(){
//    int i,j,lim=7,arr[100]={5,4,2,8,5,7,1},sec,num=0;
//    
//     
//    num=arr[0]; 
//    sec=arr[0];
//
//    //num= 2
//    //sec= 3
//    
//    for(i=1;i<lim;i++){
//            if( arr[i]>num){
//                sec=num;
//                num=arr[i];
//            }else if( sec < arr[i] ){
//                sec=arr[i];
//
//            }
//        
//
//    }
//
//    printf("%d ",sec);
//}

//#include <stdio.h>
//int main(){
//    int i ,j,arr[100]={34,0,5,6,0,2,0},lim=7,temp;
//
//    for(i=0;i<lim;i++){
//        if(arr[i]==0){
//            for(j=lim-1;j>=i;j--){
//                if(arr[j]!=0){
//                    temp=arr[i];
//                    arr[i]=arr[j];
//                    arr[j]=temp;
//                    
//                }
//            }
//        }
//
//    }
//    for(i=0;i<lim;i++){
//        printf("%d ",arr[i]);
//    }
//}

//#include <stdio.h>
//
//int main(){
//int i,j,lim=5,p=0;
//
//for(i=1;i<=lim*2-1;i++){
//          if(i<=lim){
//                p++;
//            }else{
//                p--;
//            }
//    for(j=1;j<=lim*2-1;j++){
//        
//        if(i==j || j==lim*2-1-(i-1)){
//            
//            printf("%d",p);
//        }else{
//            printf(" ");
//        }
//    }printf("\n");
//}
//}

//#include <stdio.h>
//
//int main(){
//    int i,j,lim=5;
//
//    for(i=1;i<=lim;i++){
//        for(j=1;j<=lim*2-(i*2-1);j++){
//            if(j>lim-i){
//                printf("*");
//            }else{
//                printf(" ");
//            }
//        }printf("\n");
//    }for(i=2;i<=lim;i++){
//        for(j=1;j<=i*2-1;j++){
//            if(j>=i){
//                printf("*");
//            }else{
//                printf(" ");
//            }
//        }printf("\n");
//    }
//}


//#include <stdio.h>
//
//int main(){
//    int i,j,lim=8,arr[100]={2,3,4,6,7,8,9,3},flag,sum,count=0;
//
//    for(i=0;i<lim;i++){
//        flag=0;
//        for(j=2;j<arr[i];j++){
//            if(arr[i]%j==0){
//                flag=1;
//                break;
//            }
//        }
//        if(flag==0){
//            printf("%d ",arr[i]);
//            sum+=arr[i];
//            count++;
//        }
//
//    }
//
//    printf("\n %d is the average of the prime numbers ",sum/count);
//    printf("\n%d  %d",sum,count);
//}

//#include <stdio.h>
//int main(){
//    int i,j,lim=4,m,p=1;
//    for(i=1;i<=lim*2;i++){
//
//        if(i<=lim){
//            m=i;
//            
//        }else{
//            m=lim*2-(i-1);
//        }
//        for(j=1;j<=m;j++){
//            if(i>lim){
//                p=lim*2-()
//            }
//            printf("%d ",p);
//        }printf("\n");
//        
//    }
//}

//#include <stdio.h>
//
//int main(){
//    int i,j,lim=4,m;
//
//    for(i=1;i<=lim*2-1;i++){
//   
//        if(i<=lim){
//
//        for(j=1;j<=lim;j++){
//           if(j<i){
//            printf("-");
//           }else{
//            printf("* ");
//           }
//        }printf("\n");
//        }else{
//            for(j=1;j<=lim;j++){
//                if(j>=lim*2-(i)){
//                    printf("* ");
//                }else{
//                    printf("-");
//                }
//            }printf("\n");
//        }
//        
//    }
//}

//#include <stdio.h>
//int main(){
//    int i,j,lim=5,m,s;
//
//    for(i=1;i<=lim*2-1;i++){
//        if(i<=lim){
//            m=lim-(i-1);
//            s=i-1;
//        }else{
//            m=i-(lim-1);
//            s=lim*2-(i+1);
//        }
//        for(j=1;j<=s;j++){
//            printf(" ");
//        }
//        for(j=1;j<=m;j++){
//            printf("* ");
//        }printf("\n");
//    }
//}

//#include <stdio.h>
//int main(){
//    int i,j,lim=9;
//
//    for(i=1;i<lim*2;i++){
//        for(j=1;j<lim*2;j++){
//            if(j==lim || i==lim || j==lim-(i-1) || j==lim+(i-1) || j==(i-lim+1) ||j==lim+((lim*2-1)-i) ){
//                printf("* ");
//            }else{
//                printf("  ");
//            }
//
//           
//        }printf("\n");
//    }
//}


//#include <stdio.h>
//
//int main(){
//    int i,j,arr[100]={3,23,3,99,3,23,1},lim=7,sum,flag,k,count;
//
//    for(i=0;i<lim;i++){
//        sum+=arr[i];
//
//    }if(sum%2==0){
//
//        for(i=0;i<lim;i++){
//            flag=0;
//            for(j=2;j<arr[i];j++){
//                if(arr[i]%j==0){
//                    flag=1;
//                    break;   
//                }
//            }if(flag==0){
//                for(k=i;k<lim;k++){
//                    arr[k]=arr[k+1];
//                }i--;
//                lim--;
//            }
//
//        }
//
//        printf("all prime numbers are deleted !\n");
//        for(i=0;i<lim;i++){
//            printf("%d ",arr[i]);
//        }
//    }else{
//
//        
//
//        for(i=0;i<lim;i++){
//            count=1;
//            for(j=0;j<lim;j++){
//                if(i!=j && arr[i]==arr[j]){
//                    count++;
//                    for(k=j;k<lim;k++){
//                        arr[k]=arr[k+1];
//                    }j--;
//                    lim--;
//
//                }
//            }if(count>1){
//                printf("%d number %d times repeated\n",arr[i],count);
//            }
//        }
//    }
//
//}

//#include <stdio.h>
//
//int main(){
//    int i,j,lim=5,arr[100]={2,4,6,2,5};
//    int lim2=4,arr2[100]={4,5,7,8},sum,temp;
//    int arr3[100];
//
//    sum=lim+lim2;
//    //for(i=lim;i<sum;i++){
//    //    arr[i]=arr2[j];
//    //    j++;
//    //}
//    j=0;
//
//    for(i=0;i<sum;i++){
//        if(i<lim){
//        arr3[i]=arr[i];
//        }else{
//            arr3[i]=arr2[j];
//            j++;
//        }
//    }
//
//    for(i=0;i<sum-1;i++){
//       for(j=i+1;j<sum;j++){
//        if(arr3[i]<arr3[j]){
//            temp=arr3[i];
//            arr3[i]=arr3[j];
//            arr3[j]=temp; 
//        }
//
//       }
//    }
//
//    for(i=0;i<sum;i++){
//        printf("%d ",arr3[i]);
//    }
//}

//#include <stdio.h>
//
//int main()
//{
//    
//   int arr[100]={2,9,7,5,3,5,6,10,4};
//   int i,j,lim=9,flag,m;
//
//   for(i=0;i<lim;i++){
//      flag=0;
//      for(j=2;j<arr[i];j++){
//          if(arr[i]%j==0){
//              flag=1;
//              break; 
//          }
//
//      }if(flag==0){
//        for(j=1;j<=2;j++){
//            for(m=i+1;m<lim-1;m++){
//            arr[m]=arr[m+1];
//            }
//        }
//        lim=lim-2;
//      }
//   }
//
//   for(i=0;i<lim;i++){
//    if(arr[i]%2!=0){
//        for(j=i;j<lim-1;j++){
//        arr[j]=arr[j+1];
//        }i--;
//        lim--;
//    }
//   }
//
//   for(i=0;i<lim;i++){
//    printf("%d ",arr[i]);
//   }
//}

//#include <stdio.h>
//
//void  main(){
//    int i,j,lim=8;
//
//    for(i=1;i<=lim;i++){
//        for(j=1;j<=lim;j++){
//            if(i==1 || j==i ||j==lim){
//                printf("* ");
//            }else{
//                printf("  ");
//            }
//
//            
//        }printf("\n");
//    }
//}


//#include <stdio.h>
//
//int main(){
//    int i,j,lim=5;
//
//    for(i=1;i<=lim;i++){
//        for(j=1;j<=lim*2-1;j++){
//            if(j==lim-(i-1) || j==lim+(i-1) || i==lim){
//                printf("* ");
//            }else{
//                printf("  ");
//            }
//        }printf("\n");
//    }
//
//
//}

//#include <stdio.h>
//int main(){
//    int i ,j,lim=5,p;
//    for(i=1;i<=lim;i++){
//        p=i;
//        for(j=1;j<=lim;j++){
//            if(j>=i){
//                printf("%d ",p);
//                p+=i;
//            }else{
//                printf(" ");
//            }
//        }printf("\n");
//    }
//}

//#include <stdio.h>
//
//void main(){
//int i,j,lim=6;
//
//for(i=1;i<=lim;i++){
//    for(j=1;j<=lim+i-1;j++){
//        if(j>=i){
//            printf("*");
//        }else{
//            printf(" ");
//        }
//    }printf("\n");
//}
//
//}

//#include <stdio.h>
//
//int main(){
//    int i,j,lim=5,m;
//
//    for(i=1;i<=lim;i++){
//        for(j=1;j<=3+(i-1);j++){
//            for(m=1;m<=j;m++){
//                printf("x");
//            }printf("\n");
//
//        }
//    }
//}

//#include <stdio.h>
//
//int main(){
//    int i,j,lim=4,p=1,m;
//
//    for(i=1;i<=lim*2;i++){
//        if(i<=lim){
//            m=i*2-1;
//           
//        }else{
//            m=(lim*2-(i-1))*2-1;
//            
//
//
//        }
//
//
//        for(j=1;j<=m;j++){
//            if(j%2==0){
//                printf("*");
//            }else{
//                printf("%d",p);
//                p++;
//                
//            }
//            
//           
//        }printf("\n");
//
//    }
//
//
//}

//#include <stdio.h>
//
//int main(){
//    int i,j,lim=8,arr[100]={3,4,6,3,4,3,3,8},p=1,count=1,arr2[100]={-1,-1,-1,-1,-1,-1,-1,-1};
//
//    for(i=0;i<lim;i++){
//        count=1;
//        for(j=0;j<lim;j++){
//            if(i!=j && arr[i]==arr[j]){
//                count++;
//                arr2[j]=0;
//                p++;
//            }
//        }arr2[i]=count;
//    }
//
//    for(i=0;i<p;i++){
//        if(arr2[i]>0){
//            printf("%d is times repeated %d\n",arr[i],arr2[i]);
//        }
//    }
//}


//#include <stdio.h>
//
//int main(){
//
//    int i,j,lim=7;
//    for(i=1;i<=lim;i++){
//         printf("%d  ",i);
//        for(j=1;j<=lim*2-1;j++){
//           
//            if(j==lim-(i-1) || j==lim+(i-1) || i==lim){
//                printf("* ");
//            }else{
//                printf("- ");
//            }
//            
//        }printf("\n");
//    }
//}

//#include <stdio.h>
//
//int main(){
//    int i,j,lim=9;
//
//    for(i=1;i<=lim;i++){
//        for(j=1;j<=lim;j++){
//            if(i==j || i==lim || i==1 || j==1 || j==lim || j==lim-(i-1)){
//                printf(" *");
//
//            }else{
//                printf("  ");
//            }
//        }printf("\n");
//    }
//}


//#include <stdio.h>
//
//int main(){
//    int i,j,lim=7;
//
//    for(i=1;i<=lim;i++){
//        for(j=1;j<=lim;j++){
//            if(i==j || i==1 || j==lim){
//                printf("* ");
//            }else{
//                printf("  ");
//            }
//        }printf("\n");
//    }
//}

//#include <stdio.h>
//
//int main(){
//    int i,j,lim=8;
//
//    for(i=1;i<=lim*2-1;i++){
//        for(j=1;j<=lim*2-1;j++){
//
//            if(i<=lim){
//
//                if(j==lim-(i-1)  || j==lim+(i-1)){
//                    printf("* ");
//                }else{
//                    printf("  ");
//                }
//
//            }else{
//
//                if(j==(i-lim+1) || j==lim*2-1-(i-lim)){
//                    printf("* ");
//                }else{
//                    printf("  ");
//                }
//
//            }
//            
//        }printf("\n");
//    }
//}

//#include <stdio.h>
//int main(){
//    int i,j,lim=5,m;
//
//    for(i=1;i<=lim*2-1;i++){
//
//        if(i<=lim){
//            m=(lim*2)-(i*2-1);
//        }else{
//            m=(i-lim)*2+1;
//        }
//
//        for(j=1;j<=m;j++){
//
//            if(i<=lim){
//                if(j>=lim-(i-1)){
//
//                    printf(" *");
//                }else{
//                    printf("- ");
//                }
//            }else{
//                if(j>i-lim){
//                    printf(" *");
//                }else{
//                    printf("  ");
//                }
//            }
//        }printf("\n");
//    }
//}

//#include <stdio.h>
//
//int main(){
//    int i,j,lim=6;
//    for(i=1;i<=lim*2-1;i++){
//        for(j=1;j<=lim*2-1;j++){
//            if(j==lim || i==lim || j==lim-(i-1) || j==lim+(i-1) || j==i-(lim-1) || j==(lim*2-1)-(i-lim) ){
//                printf(" *");
//            }else{
//                printf("  ");
//            }
//
//        }printf("\n");
//    }
//}

//#include <stdio.h>
//
//int main(){
//    int i,j,lim=6;
//
//    for(i=1;i<=lim-2;i++){
//
//        for(j=1;j<=lim*2-1;j++){
//            if(j<=i*2-1 || j>(lim*2-1)-(i*2-1)){
//                printf(" *");
//            }else{
//                printf("  ");
//            }
//        }printf("\n");
//
//    }
//}

//#include <stdio.h>
//
//int main(){
//    int i,j,lim=9;
//
//    for(i=1;i<=lim;i++){
//        for(j=1;j<=lim;j++){
//            if(j==1 || j==lim || j==i){
//                printf(" *");
//            }else{
//                printf("  ");
//            }
//        }printf("\n");
//    }
//}



//#include <stdio.h>
//int main (){
//
//    int i , j,sreeaknth;
//
//    printf("Enter limt");
//    scanf("%d",&i);
//    printf(" you enterd %d number ",i);
//
//    for(sreeaknth=1  ;  sreeaknth <= i ; sreeaknth++){
//        printf("%d ",sreeaknth);
//    }
//
//    
//}

//#include <stdio.h>
//
//int main(){
//    int i,j ,lim= 6;
//
//    for(i=1;i<lim ; i++ ){
//        for(j=1;j<=lim*2-1;j++){
//            if(j==1 || j==lim*2-1){
//                printf("'' ");
//            }else if(j>=lim-(i-1) && j<=lim+(i-1) ){
//                printf("* ");
//            }else{
//                printf("  ");
//            }
//        }printf("\n");
//    }
//
//
//}

//#include <stdio.h>
//int main(){
//    int i,j,lim=9,m,p;
//
//    for(i=1;i<=lim*2;i++){
//
//        if(i<=lim){
//            m=i*2-1;
//            p=i;
//
//        }else{
//            m=(lim*2-(i-1))*2-1;
//           
//        }
//
//        for(j=1;j<=m;j++){
//            if(j%2==0){
//                printf("*");
//            }else{
//                printf("%d",p);
//                
//            }
//
//        }printf("\n");
//
//                if(i>lim){
//                    p--;
//                }
//    }
//}



//#include <stdio.h>
//
//int main(){
//    int i,j,lim=5;
//
//    for(i=1;i<=lim;i++){
//
//        for(j=lim;j>=1;j--){
//
//            if(j==1 + (i-1)){
//                printf("* ");
//            }else{
//                printf("%d ",j);
//            }
//
//        }printf("\n");
//
//    }
//}

//#include <stdio.h>
//
//int main(){
//    int i,j,lim=3,m;
//
//    for(i=1;i<=lim;i++){
//        for(j=1;j<=2;j++){
//            for(m=1;m<=i;m++){
//                 printf("* ");
//            }printf("\n");
//        }
//
//        for(j=1;j<=i*3;j++){
//            printf("* ");
//        }printf("\n");
//    }
//}

//#include <stdio.h>
//void odd(int lim);
//
//int main(){
//    int i,j,lim=0;
//    char arr[100];
//
//    printf("Enter a name\n");
//    scanf("%s",arr);
//
//    for(i=0;arr[i]!='\0';i++){
//        lim++;
//    }
//    odd(lim);
//
//    //if(lim%2==0){
//
//   // }
//}
//
//void odd(int lim){
//    int i,j;
//
//    for(i=1;i<=lim;i++){
//        for(j=1;j<=lim;j++){
//            if(j==i || j==lim-(i-1)){
//                printf("x ");
//            }else{
//                printf("  ");
//            }
//        }printf("\n");
//    }
//
//}


//#include <stdio.h>
//
//int main(){
//    int i ,j,lim=4,n=0;
//
//    for(i=1;i<=lim;i++){
//         n=1;
//        
//        for(j=1;j<=lim*2;j++){
//
//            if(i>1 && j>lim-(i-1) && j<=lim+(i-1)){
//                printf("* ");
//
//            }else if(i==1 ){
//                printf("%d ",n);
//
//            }else{
//                printf("%d ",n);
//            }
//
//            if(j<lim){
//                n++;
//            }else{
//                if(j>=lim+1){
//                    n--;
//
//                }
//                
//            }
//
//           
//
//
//        }printf("\n");
//    }
//}


//#include <stdio.h>
//
//int main(){
//    int i,lim=5,j,m,p=1;
//
//    for(i=1;i<=lim;i++){
//        for(j=1;j<=lim-i;j++){
//            printf("  ");
//        }
//        p=i;
//        for(j=1;j<=i*2-1;j++){
//            printf("%d ",p-1);
//
//            if(j>(i*2-1)/2){
//               p++;
//            }else{
//                
//                 p--;
//            }
//        }printf("\n");
//
//       
//        }
//    
//}

//#include <stdio.h>
//
//int main(){
//    int i,j,lim=5,p;
//
//    for(i=1;i<=lim;i++){
//
//        p=i-1;
//
//        for(j=1;j<=lim*2-1;j++){
//
//            if(j>=lim-(i-1) && j<=lim+(i-1)){
//
//                printf("%d ",p);
//
//                if(j<lim){
//                    p--;
//                }else{
//                    p++;f
//                }
//
//            }else{
//                printf("  ");
//            }
//        }printf("\n");
//    }
//}


//#include <stdio.h>
//
//int main(){
//    int i,j,lim=6,arr[100],sec,larg;
//
//    for(i=0;i<lim;i++){
//        scanf("%d",&arr[i]);
//    }
//
//
//    sec=0;
//    larg=0;
//     for(i=0;i<lim;i++){
//        if(arr[i]> larg ){
//            sec=larg;
//            larg=arr[i];
//        }else if( arr[i] < larg && arr[i] > sec ){
//            sec=arr[i];
//        }
//     }
//     printf("\n\n%d ",sec);
//}

//#include <stdio.h>
// 
//int main(){
//
//    int i,j,lim=4,p=1,m;
//
//
//    for(i=1;i<=lim;i++){
//        for(j=1;j<=i*2-1;j++){
//            if(j%2==0){
//                printf(" *");
//            }else{
//                printf(" %d",p++);
//            }
//        }printf("\n");
//    }
//    for(i=lim;i>=1;i--){
//        m=p-i;
//
//        for(j=1;j<=(i*2)-1;j++){
//
//            if(j%2==0)
//                printf(" *");
//            else
//                printf(" %d",m++);
//            
//            
//        } 
//        p=p-i;
//        printf("\n");
//       
//    }
//}

//#include <stdio.h>
//
//int main(){
//    int i,j,lim=7,arr[100]={4,6,4,6,8,6,8},count,m;
//
//    for(i=0;i<lim;i++){
//        count=1;
//        for(j=0;j<lim;j++){
//            if(i!=j && arr[i]==arr[j]){
//                count++;
//                for(m=j;m<lim;m++){
//                    arr[m]=arr[m+1];
//                }j--;
//                lim--;
//            }
//        }if(count==2){
//            printf("%d\n",arr[i]);
//        }
//    }
//}

//#include <stdio.h>
//
//int main(){
//    int i,j,lim=6,m;
//
//    for(i=1;i<=lim*2-1;i++){
//        if(i<=lim){
//            m=i;
//        }else{
//            m--;
//        }
//        for(j=1;j<=lim*2-1;j++){
//            if(i==j || j==(lim*2-1)-(i-1) ){
//                printf("%d",m);
//            }else{
//                printf(" ");
//            }
//        }printf("\n");
//    }
//}

//#include <stdio.h>
//
//int main(){
//    int i,j,lim=5;
//
//    for(i=1;i<=lim;i++){
//        for(j=1;j<=lim*2-1;j++){
//            if(j>=lim-(i-1) && j<=lim+(i-1)){
//                printf(" *");
//            }else{
//                printf("  ");
//            }
//        }printf("\n");
//    }
//}

//#include <stdio.h>
//
//int main(){
//    int i,j,lim=5,p,m;
//
//    for(i=1;i<=lim;i++){
//        p=i;
//        m=i-1;
//        for(j=1;j<=lim;j++){
//            
//        
//            if(p<=lim){
//                printf("%d ",p*2-1);
//                p++;
//            }else{
//                printf("%d ",m*2-1);
//                m--;
//            }
//
//        }printf("\n");
//    }
//}

//#include <stdio.h>
//int main(){
//    int i,j,lim=5,p=0,m;
//
//    for(i=1;i<=lim;i++){
//       
//       
//        if(i%2!=0){
//
//        m=p+i;
//        }else{
//
//        p=i+p;
//        }
//        
//        for(j=1;j<=i;j++){
//            if(i%2!=0){ 
//               printf("%d ",m--);
//            }else{
//               printf("%d ",p++);
//            }
//
//        }printf("\n");
//        if(i%2==0){
//        p--;
//        }
//    }
//}

//#include <stdio.h>
//
//int main(){
//    int i,j,lim=7,count,m,arr[100],ar[100];
//
//
//    printf("Enter 7 number :\n");
//    for(i=0;i<lim;i++){
//        scanf("%d",&arr[i]);
//        ar[i]=-1;
//        
//    }
//   
//
//    for(i=0;i<lim;i++){
//        count=1;
//        for(j=0;j<lim;j++){
//            if(i!=j && arr[i]==arr[j]){
//                count++;
//                ar[j]=0;
//            }
//        }ar[i]=count;
//
//    }
//
//
//    for(i=0;i<lim;i++){
//        if(ar[i]>0){
//            printf("%d is %d times repeated\n",arr[i],ar[i]);
//        }
//        
//    }
//}


//write a program to insert a value in the aray (sorted list).

#include <stdio.h>

int main(){
    int i,j,lim=5,array[100]={1,2,6,7,12},num;

    printf("enter a number :");
    scanf("%d",&num);

    

    for(i=0;i<lim;i++){
        if(num<array[i]){
            for(j=lim-1;j>=i;j--){
                array[j+1]=array[j];
            }array[i]=num;
            lim++;
            break;
        }
    }

    for(i=0;i<lim;i++){
        printf("%d ",array[i]);
    }
}





