class Solution {
public:
  bool isRobotBounded(string instructions) {    
    int x = 0;
    int y = 0;
    int d = 0;
    vector<int> dx{0, 1, 0, -1};
    vector<int> dy{-1, 0, 1, 0};    
    for (char c : instructions) {
      if (c == 'G') {
        x += dx[d];
        y += dy[d];
      } else {
        d = (d + (c == 'L' ? 3 : 1)) % 4;
      }
    }
    return x == 0 && y == 0 || d;
  }
};