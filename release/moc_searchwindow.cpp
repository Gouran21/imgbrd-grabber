/****************************************************************************
** Meta object code from reading C++ file 'searchwindow.h'
**
** Created: Sat 19. Nov 22:12:19 2011
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../includes/searchwindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'searchwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_SearchWindow[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      14,   13,   13,   13, 0x05,

 // slots: signature, parameters, type, tag, flags
      34,   32,   13,   13, 0x0a,
      49,   13,   13,   13, 0x0a,
      58,   13,   13,   13, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_SearchWindow[] = {
    "SearchWindow\0\0accepted(QString)\0d\0"
    "setDate(QDate)\0accept()\0"
    "on_buttonImage_clicked()\0"
};

const QMetaObject SearchWindow::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_SearchWindow,
      qt_meta_data_SearchWindow, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SearchWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SearchWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SearchWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SearchWindow))
        return static_cast<void*>(const_cast< SearchWindow*>(this));
    return QDialog::qt_metacast(_clname);
}

int SearchWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: accepted((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: setDate((*reinterpret_cast< QDate(*)>(_a[1]))); break;
        case 2: accept(); break;
        case 3: on_buttonImage_clicked(); break;
        default: ;
        }
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void SearchWindow::accepted(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
