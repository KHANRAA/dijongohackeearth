//
// Created by AKASH KHANRA on 2019-03-24.
//

#include <iostream>
using namespace std;
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
#include <string.h>
#include <stack>
#include <queue>
#define ll long long
#include <math.h>
#include <unordered_map>
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)
int main()
{
    fast;
    ll t;
    cin>>t;
    vector<string> sidea;
    vector<string> sideb;
    vector<ll> apoints;
    vector<ll> bpoints;
    vector<ll> ta;
    vector<ll> tb;
    vector<string> te;
    unordered_map<string ,ll> umap;
    while(t--)
    {
        for(ll i=0;i<12;i++)
        {
            string temp1,temp2;
            ll temp3,temp4;
            string vs;
            string fake;
           cin>>temp1;
           sidea.push_back(temp1);
           umap[temp1]++;
           cin>> temp3;
           apoints.push_back(temp3);
           cin>>fake;
            cin>> temp4;
            bpoints.push_back(temp4);
            cin>>temp2;
            sidea.push_back(temp2);

        }
        vector<ll> onemap;
        for(ll i=0;i<apoints.size();i++)
        {
            if(apoints[i]==bpoints[i]){
                onemap.push_back(1);}
            else {
                onemap.push_back(1);
            }
        }
        for(ll i=0;i<apoints.size();i++)
        {
            if(apoints[i]>bpoints[i])
            {
               ta.push_back(3);
            }else if(apoints[i]<bpoints[i])
                tb.push_back(3);
            else {
                ta.push_back(0);
                tb.push_back(0);


            }

        }
        vector<ll> fp1;
        vector<ll> fp2;
        for(ll i=0;i<12;i++)
        {
            fp1.push_back(ta[i]+onemap[i]);
            fp2.push_back(tb[i]+onemap[i]);
        }
            vector<ll>last;
        for(auto x : umap)
        {
            ll sum=0;
            for(ll j=0;j<12;j++)
            {
                if(x.first==sidea[j])
                    sum+=fp1[j];


            }
            last.push_back(sum);

        }
        




    }
return 0;
}