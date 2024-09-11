#ifndef ALGORITHMS_H
#define ALGORITHMS_H

#include <vector>

class FirstFit {
public:
    void addVertex(int vertex, const std::vector<std::vector<int>>& subGraph);
    int getUniqueColors() const;
    std::vector<int> getColors() const;

private:
    std::vector<int> colors;
    int colorCount;
};

class CBIP {
public:
    CBIP(const std::vector<std::vector<int>>& graph);
    void runAlgorithm(int vertex, const std::vector<int>& neighbors);
    int getUniqueColors() const;
    std::vector<int> getColors() const;

private:
    std::vector<int> colors;
};

#endif // ALGORITHMS_H
