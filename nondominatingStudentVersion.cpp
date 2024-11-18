#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Point 
{
    int x, y;
};

bool compareByX(const Point &p1, const Point &p2) 
{
    if (p1.x == p2.x)
        return p1.y < p2.y;  
    return p1.x < p2.x;       
}

vector<Point> mergeMinimalPoints(const vector<Point> &leftResult, const vector<Point> &rightResult) 
{
    //merge leftResult and rightResult to finalResult
    vector<Point> ans = leftResult;
    Point pt = ans.back();
    int ycor = pt.y;

    for(auto it : rightResult){
        int rightY = it.y;
        if(rightY <= ycor){
            ans.push_back(it);
        }
    }
    
    return ans;
}

vector<Point> findNonDominatingPoints(vector<Point> &points, int left, int right) 
{
    if (left == right) 
    {
        return {points[left]};
    }
    
    int mid = left + (right - left) / 2;

    vector<Point> leftResult = findNonDominatingPoints(points, left, mid);
    vector<Point> rightResult = findNonDominatingPoints(points, mid + 1, right);

    return mergeMinimalPoints(leftResult, rightResult);
}

int main() 
{
    vector<Point> points = {{1, 6}, {3, 5}, {2, 4}, {4, 3}, {5, 2}};
    
    sort(points.begin(), points.end(), compareByX);

    for(auto p: points)
    {
        cout<<p.x<<" "<<p.y<<endl;
    }

    vector<Point> minimalPoints = findNonDominatingPoints(points, 0, points.size() - 1);

    cout << "Non-dominating points (minimal points): " << endl;
    for (const Point &p : minimalPoints) 
    {
        cout <<p.x <<" "<<p.y<<endl;
    }

    return 0;
}
