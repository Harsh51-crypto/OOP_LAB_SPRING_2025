void generateMaze() {
   stack<Cell*> stack;
   cells[0].visited = true;
   stack.push(&cells[0]);

   while (!stack.empty()) {
       Cell* current = stack.top();
       stack.pop();

       vector<int> neighbors = findUnvisitedNeighbors(current);
       if (!neighbors.empty()) {
           stack.push(current);
           Cell* neighbor = selectRandomNeighbor(neighbors);
           removeWalls(*current, *neighbor);
           neighbor->visited = true;
           stack.push(neighbor);
       }
   }
}
