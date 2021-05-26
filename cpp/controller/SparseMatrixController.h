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


Merhaba Deðerli Yetkililer;


Þikayetimiz þu þekilde birden fazla iþ kalemi anlaþmamýza ve net tutar sözleþmede yazýlý biz bunu 57.000 tl ödedik ve geri kalaný yapmadýðý için devam edemedik ve bize sunulan elimde bu var istersen al istersen alma þeklinde bir durumla karþý karþýya kaldýk.bu kalemlerin hiçbirini  konuþulan ve kabul edilen kalitede ve zamanda yapýlmadý.ve þuan hiçbirini doðru düzgün kullanamamaktayýz.

ilgililere teþekkür ederiz.