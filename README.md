# Programming Checkpoint 2: Wildfire
[![Points badge](../../blob/badges/.github/badges/points.svg)](../../actions)

## Programming Checkpoint Outcomes:
Develop a C++ class that uses recursion to simulate a wildfire

## Preparatory Readings:
- ZyBook Chapter 5 recursion
- ZyBook Primer chapters

## Background Information
### Project Overview
In this programming checkpoint, you will be required to create a class which
will simulate a wildfire. The class can read a description of a map of cells
where each cell can be either a Tree (**T**), Fire (**F**), or Water (**W**).
Starting a fire in a **T** cell would turn it to an **F** as well as spread the
fire to the adjacent (top, down, right, and left) **T** cells. The fire would
stop spreading in a given direction when it encounters a **W** cell.

### Project Requirements:
You are provided with a test suite in folder [test/](test/).
Your implementation must pass all tests provided in this test suite:
1. The test suites are:
	1. [test-1-wildfire](test/test-1-wildfire.cpp)
	1. [test-2-wildfire](test/test-2-wildfire.cpp)
	1. [test-3-wildfire](test/test-3-wildfire.cpp)
	The wildfire test suite is broken into three sets for grading purposes.
1. Running all of these tests must be possible by running `make test-all`.
1. Your project will lose points if memory leaks exist.
1. Your project should use recursion.

### Input format
The file [map.txt](map.txt) contains a description of the map of cells. The
first two rows of the text file contain the number of rows and columns of the
map. Each following line represents a row of cells. Each cell contains either a
tree (**T**), water (**W**) or a fire(**F**). You can assume that the map file
properly formatted.

## UML of the classes
![UML of Wildfire class](https://res.cloudinary.com/dm3fdmzec/image/fetch/http://www.plantuml.com/plantuml/png/LOyvZiCm34LxdOALCLvy0OyBLtE1AL8BbfGGa2M3fBCWICuUMJ6oLCB7-tXV75WqoJ9vDNhD33lqnY5PkAfsF6Y2ge99pwh5871-FXTLlse_BARhM0Z3VYqwzBRyv2dSlzB_ElYNKtOsa9rb1yU8HjMEq0O3sHjPoEgfW3XRqXAfxxV5ZK12YpGmni3o_dnnSkMlkgaXcT9j3m00)

### Submission Requirements:
1. All code must be added and committed to your local git repository.
2. All code must be pushed to the GitHub repository created when you "accepted"
   the assignment.
    1. After pushing, with `git push origin master`, visit the web URL of your
       repository to verify that your code is there. If you don't see the code
       there, then we can't see it either.
3. Your code must compile and run. The auto-grading tests will indicate your
   score for your submission.
    1. The auto-grading build should begin automatically when you push your code
       to GitHub.
	2. If your program will not compile, you will not get credit

## Important Notes:
- Projects will be graded on whether they correctly solve the problem, and
  whether they adhere to good programming practices.
- Projects must be received by the time specified on the due date. Projects
  received after that time will get a grade of zero.
- Please review the academic honesty policy.
    - Note that viewing another student's solution, whether in whole or in part,
      is considered academic dishonesty.
    - Also note that submitting code obtained through the Internet or other
      sources, whether in whole or in part, is considered academic dishonesty.
    - All programs submitted will be reviewed for evidence of academic
      dishonesty, and all violations will be handled accordingly.

[![Walk-through of the first test case](https://res.cloudinary.com/dm3fdmzec/image/upload/v1604349597/Getting_started_with_Checkpoint_2_-_YouTube_ezrvav.png)](https://www.youtube.com/watch?v=LtbRpdjpbvQ)

## Auto-grading
1. The auto-grading process are controlled by the autograding.json file in the
   .github/classroom directory. You may read it to see what tests are done.
   **Never modify it to get a better grade!** Will be considered cheating.
1. Some tests are output comparison base. It is your responsibility to make sure
   that your output matches the formatting requirements in the description
   exactly. Do not add extra spaces or letters!
1. You will see your grade like **0/50** as a badge at the top of the README.md
    page shortly after the push.
1. To check the details:

    1. On your GitHub repo page, Click the :arrow_forward: **Actions** tab to see
        your graded results.
    1. If it isn't a green check mark (:heavy_check_mark:) then at least part of the
        testing failed.
    1. Click the commit message for the failing version then click "Autograding" on
        the left side of the page.
    1. Follow the :x: path and expand things to see what errors exist.

## Grade break-down
- 50 pts - Auto-grading
