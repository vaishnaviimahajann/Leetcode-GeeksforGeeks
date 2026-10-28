class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        int n = asteroids.size();

        for (int i = 0; i < n; i++) {
            if (asteroids[i] >= 0)
                continue;

            int j = i - 1;

            while (j >= 0 && asteroids[i] < 0 && asteroids[j] > 0) {
                if (asteroids[j] < abs(asteroids[i])) {
                    asteroids.erase(asteroids.begin() + j);
                    i--;
                    j--;
                }
                else if (asteroids[j] == abs(asteroids[i])) {
                    asteroids.erase(asteroids.begin() + i);
                    asteroids.erase(asteroids.begin() + j);
                    i = j - 1;
                    break;
                }
                else {
                    asteroids.erase(asteroids.begin() + i);
                    i--;
                    break;
                }
            }
        }

        return asteroids;
    }
};
