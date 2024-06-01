from student import Student
from quiz.Questions import Questions

# student = Student("limon", "Software Engineer", 3.21, False)
# print(student.name)

question_prompt = [
    "What color are Apples?\n(a) Red/Green\n(b) Purple\n(c) Orange\n\n",
    "What color are Bananas?\n(a) Teal\n(b) Magenta\n(c) Yellow\n\n",
    "What color are strawberries?\n(a) Yellow\n(b) Red\n(c) Blue\n\n",
]
# create questions object
questions = [
    Questions(question_prompt[0], "a"),
    Questions(question_prompt[1], "b"),
    Questions(question_prompt[2], "c"),
]


def run_tests(questions):
    score = 0
    for question in questions:
        answer = input(str(question.prompt) + "Ans:")
        if (answer == question.answer):
            score += 1
    print("You got " + str(score) + "/" + str(len(questions)) + " Correct")


run_tests(questions)
