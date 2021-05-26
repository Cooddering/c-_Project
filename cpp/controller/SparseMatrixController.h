#ifndef SPARSEMATRIXCONTROLLER_H
#define SPARSEMATRIXCONTROLLER_H

#include "MatrixController.h"

class SparseMatrixController : public MatrixController {
public:
    SparseMatrixController(Matrix* = nullptr, Matrix* = nullptr);

    //matrix2 if whichMatrix=2, matrix2 else
    void buildMatrix(const QVector<KeypadInput*>&, unsigned int, unsigned int, int whichMatrix = 1) override;
    void buildMatrix(unsigned int, unsigned int, int whichMatrix = 1) override;
    void setMatrix(const Matrix&, int whichMatrix = 1) override;

    //sparse operations
    virtual double getSparsity() const;
    virtual bool isDense() const;
    virtual QVector<double> nonZeroRow(unsigned int) const;
    virtual QVector<double> nonZeroCol(unsigned int) const;
};

#endif // SPARSEMATRIXCONTROLLER_H


Merhaba De�erli Yetkililer;


�ikayetimiz �u �ekilde birden fazla i� kalemi anla�mam�za ve net tutar s�zle�mede yaz�l� biz bunu 57.000 tl �dedik ve geri kalan� yapmad��� i�in devam edemedik ve bize sunulan elimde bu var istersen al istersen alma �eklinde bir durumla kar�� kar��ya kald�k.bu kalemlerin hi�birini  konu�ulan ve kabul edilen kalitede ve zamanda yap�lmad�.ve �uan hi�birini do�ru d�zg�n kullanamamaktay�z.

ilgililere te�ekk�r ederiz.