// include/grading.h
#ifndef GRADING_H
#define GRADING_H

#include "constants.h"

/**
 * @brief Calculates one student's mean score across all assignments.
 *
 * @pre studentIndex is in the range [0, STUDENT_COUNT).
 * @post The scores grid is not modified.
 *
 * @param[in] scores        The grade grid.
 * @param[in] studentIndex  Row of the student to average.
 * @return The mean of that student's assignment scores.
 */
[[nodiscard]] double studentAverage(const ScoreGrid& scores,
                                    int studentIndex);

/**
 * @brief Calculates the mean score on one assignment across all students.
 *
 * @pre assignmentIndex is in the range [0, ASSIGNMENT_COUNT).
 * @post The scores grid is not modified.
 *
 * @param[in] scores           The grade grid.
 * @param[in] assignmentIndex  Column of the assignment to average.
 * @return The mean score earned on that assignment.
 */
[[nodiscard]] double assignmentAverage(const ScoreGrid& scores,
                                       int assignmentIndex);

/**
 * @brief Calculates the mean of every score in the grid.
 *
 * @post The scores grid is not modified.
 *
 * @param[in] scores  The grade grid.
 * @return The mean of all STUDENT_COUNT * ASSIGNMENT_COUNT scores.
 */
[[nodiscard]] double classAverage(const ScoreGrid& scores);

/**
 * @brief Finds one student's lowest and highest assignment scores.
 *
 * @pre studentIndex is in the range [0, STUDENT_COUNT).
 * @post lowest holds that student's minimum score.
 * @post highest holds that student's maximum score.
 * @post The scores grid is not modified.
 *
 * @param[in]  scores        The grade grid.
 * @param[in]  studentIndex  Row of the student to examine.
 * @param[out] lowest        Receives the minimum score.
 * @param[out] highest       Receives the maximum score.
 */
void findExtremes(const ScoreGrid& scores, int studentIndex,
                  double& lowest, double& highest);

/**
 * @brief Counts how many students earned a given letter grade.
 *
 * @pre target is one of 'A', 'B', 'C', 'D', or 'F'.
 * @post The scores grid is not modified.
 *
 * @param[in] scores  The grade grid.
 * @param[in] target  The letter grade to count.
 * @return The number of students whose average earns that letter.
 */
[[nodiscard]] int countGrade(const ScoreGrid& scores, char target);

/**
 * @brief Reports whether a student earned a perfect score on any assignment.
 *
 * @pre studentIndex is in the range [0, STUDENT_COUNT).
 * @post The scores grid is not modified.
 *
 * @param[in] scores        The grade grid.
 * @param[in] studentIndex  Row of the student to examine.
 * @return true if any of that student's scores is 100 or above.
 */
[[nodiscard]] bool hasPerfectScore(const ScoreGrid& scores,
                                   int studentIndex);

/**
 * @brief Reports whether a student is academically at risk.
 *
 * A student is at risk when their average is below 70, or when any
 * single assignment score is below 50.
 *
 * @pre studentIndex is in the range [0, STUDENT_COUNT).
 * @post The scores grid is not modified.
 *
 * @param[in] scores        The grade grid.
 * @param[in] studentIndex  Row of the student to examine.
 * @return true if either at-risk condition holds.
 */
[[nodiscard]] bool isAtRisk(const ScoreGrid& scores, int studentIndex);

/**
 * @brief Counts how many students in the class are at risk.
 *
 * @post The scores grid is not modified.
 *
 * @param[in] scores The grade grid.
 * @return The number of students considered at risk.
 */
 [[nodiscard]] int countAtRisk(const ScoreGrid& scores);
/**
 * @brief Counts how many students in the class are at risk.
 *
 * @post The scores grid is not modified.
 *
 * @param[in] scores The grade grid.
 * @return The number of students considered at risk.
 */
[[nodiscard]] int countAtRisk(const ScoreGrid& scores);

/**
 * @brief Finds the lowest and highest score in the entire class.
 *
 * @post The scores grid is not modified.
 * @post lowest contains the lowest score found.
 * @post highest contains the highest score found.
 * @post lowestStudent contains the row of the lowest score.
 * @post highestStudent contains the row of the highest score.
 *
 * @param[in] scores The grade grid.
 * @param[out] lowest Receives the lowest score.
 * @param[out] highest Receives the highest score.
 * @param[out] lowestStudent Receives the row containing the lowest score.
 * @param[out] highestStudent Receives the row containing the highest score.
 */
void findClassExtremes(const ScoreGrid& scores,
                       double& lowest,
                       double& highest,
                       int& lowestStudent,
                       int& highestStudent);

/**
 * @brief Adds a fixed number of points to every score, capped at 100.
 *
 * @post The caller's score grid is modified.
 * @post No score is greater than 100.
 *
 * @param[in,out] scores The grade grid to modify.
 * @param[in] curvePoints Number of points to add to each score.
 */
void applyCurve(ScoreGrid& scores, double curvePoints);

/**
 * @brief Returns the row index of the student with the highest average.
 *
 * @post The scores grid is not modified.
 *
 * @param[in] scores The grade grid.
 * @return The row index of the student with the highest average.
 */
[[nodiscard]] int topStudent(const ScoreGrid& scores);

#endif
