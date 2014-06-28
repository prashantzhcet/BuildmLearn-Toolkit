/*
  Copyright (c) 2012, BuildmLearn Contributors listed at http://buildmlearn.org/people/
  All rights reserved.

  Redistribution and use in source and binary forms, with or without
  modification, are permitted provided that the following conditions are met:

  * Redistributions of source code must retain the above copyright notice, this
    list of conditions and the following disclaimer.

  * Redistributions in binary form must reproduce the above copyright notice,
    this list of conditions and the following disclaimer in the documentation
    and/or other materials provided with the distribution.

  * Neither the name of the BuildmLearn nor the names of its
    contributors may be used to endorse or promote products derived from
    this software without specific prior written permission.

  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
  AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
  IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
  DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE
  FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
  DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
  SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
  CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
  OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
  OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
*/

#ifndef QUIZQUESTION_H
#define QUIZQUESTION_H

#include <QMetaType>


class QuizQuestion {
  public:
    explicit QuizQuestion();
    virtual ~QuizQuestion();

    int correctAnswer() const;
    void setCorrectAnswer(int correctAnswer);

    QString answerOne() const;
    void setAnswerOne(const QString &answerOne);

    QString answerTwo() const;
    void setAnswerTwo(const QString &answerTwo);

    QString answerThree() const;
    void setAnswerThree(const QString &answerThree);

    QString answerFour() const;
    void setAnswerFour(const QString &answerFour);

    QString question() const;
    void setQuestion(const QString &question);

  private:
    QString m_question;
    QString m_answerOne;
    QString m_answerTwo;
    QString m_answerThree;
    QString m_answerFour;
    int m_correctAnswer;
};

Q_DECLARE_METATYPE(QuizQuestion)

#endif // QUIZQUESTION_H
