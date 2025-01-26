/*

2127 : MAXIMUM EMPLOYEES TO BE INVITED TO A MEETING

A company is organizing a meeting and has a list of n employees, waiting to be invited. They have arranged for a large circular table, capable of seating any number of employees.

The employees are numbered from 0 to n - 1. Each employee has a favorite person and they will attend the meeting only if they can sit next to their favorite person at the table. The favorite person of an employee is not themself.

Given a 0-indexed integer array favorite, where favorite[i] denotes the favorite person of the ith employee, return the maximum number of employees that can be invited to the meeting.
*/

class Solution
{
public:
      int maximumInvitations(vector<int> &favorite)
      {
            int n = favorite.size();
            vector<int> inDegree(n, 0);

            // Calculate in-degree for each node
            for (int person = 0; person < n; ++person)
            {
                  inDegree[favorite[person]]++;
            }

            // Topological sorting to remove non-cycle nodes
            queue<int> q;
            for (int person = 0; person < n; ++person)
            {
                  if (inDegree[person] == 0)
                  {
                        q.push(person);
                  }
            }

            vector<int> depth(n, 1);
            while (!q.empty())
            {
                  int currentNode = q.front();
                  q.pop();
                  int nextNode = favorite[currentNode];
                  depth[nextNode] = max(depth[nextNode], depth[currentNode] + 1);
                  if (--inDegree[nextNode] == 0)
                  {
                        q.push(nextNode);
                  }
            }

            int longestCycle = 0;
            int twoCycleInvitations = 0;

            for (int person = 0; person < n; ++person)
            {
                  if (inDegree[person] == 0)
                        continue;

                  int cycleLength = 0;
                  int current = person;
                  while (inDegree[current] != 0)
                  {
                        inDegree[current] = 0;
                        cycleLength++;
                        current = favorite[current];
                  }

                  if (cycleLength == 2)
                  {

                        twoCycleInvitations += depth[person] + depth[favorite[person]];
                  }
                  else
                  {
                        longestCycle = max(longestCycle, cycleLength);
                  }
            }

            return max(longestCycle, twoCycleInvitations);
      }
};