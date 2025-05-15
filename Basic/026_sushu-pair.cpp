#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    
    if(n<5){
        cout<<0;
        return 0;
    }
    //生成素数表
    vector<bool> is_prime(n+1,true);
    is_prime[0]=is_prime[1]=false;
    for(int p=2;p*p<=n;p+=1){
        if(is_prime[p]){
            for(int i=p*p;i<=n;i+=p){
                is_prime[i]=false;
            }
        }
    }
    //将素数表转换为素数数组
    //vector<int> primes(n+1);//如果初始化为n+1的话，前面就会有n+1个0,
    //在后续计算的时候就会多计算（0，2）这一组差值为2的数对；
    vector<int> primes;
    for(int i=2;i<=n;i++){
        if(is_prime[i]){
            primes.push_back(i);
        }
    }

    int count = 0;
    for(int i=1;i<primes.size();i++){
        if(primes[i]-primes[i-1]==2){
            count++;
        }
    }
    cout<<count<<endl;
    return 0;
}