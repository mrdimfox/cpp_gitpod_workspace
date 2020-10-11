#include <iostream>
#include <algorithm>
#include <vector>
#include <cassert>

int main()
{
    //assert(freopen("knapsack.in", "r", stdin));
    //assert(freopen("knapsack.out", "w", stdout));
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    long int max_weight = 12, num = 2, curr_w = 0;
    // std::cin >> max_weight >> num;

    std::vector<long int> gold;
    std::vector<long int> weights(num);

    for(int i = 0; i < num; ++i){
        long int t;
        // std::cin >> t;
        weights[i] = 10;//t;
    }

    for(auto w : weights){
        for(auto g : gold){
            if(w + g <= max_weight){
                gold.push_back(w + g);
            }
        }
        gold.push_back(w);
    }
    
    long int ans;
    ans = *std::max_element(gold.begin(), gold.end());
    std::cout << ans;
    
    /*for(auto a : gold){
        std::cout << a << '\n';
    }*/

}