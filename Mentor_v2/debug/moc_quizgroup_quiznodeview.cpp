/****************************************************************************
** Meta object code from reading C++ file 'quizgroup_quiznodeview.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../quiz/view/views/quizgroup_quiznodeview.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'quizgroup_quiznodeview.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QuizGroupView_t {
    QByteArrayData data[12];
    char stringdata0[214];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QuizGroupView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QuizGroupView_t qt_meta_stringdata_QuizGroupView = {
    {
QT_MOC_LITERAL(0, 0, 13), // "QuizGroupView"
QT_MOC_LITERAL(1, 14, 24), // "on_tbtAddShuffle_clicked"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 22), // "on_tbtMoveDown_clicked"
QT_MOC_LITERAL(4, 63, 20), // "on_tbtMoveUp_clicked"
QT_MOC_LITERAL(5, 84, 20), // "on_tbtRemove_clicked"
QT_MOC_LITERAL(6, 105, 23), // "on_tbtAddRandom_clicked"
QT_MOC_LITERAL(7, 129, 21), // "on_tbtUpLevel_clicked"
QT_MOC_LITERAL(8, 151, 26), // "on_table_cellDoubleClicked"
QT_MOC_LITERAL(9, 178, 3), // "row"
QT_MOC_LITERAL(10, 182, 6), // "column"
QT_MOC_LITERAL(11, 189, 24) // "on_tbtProperties_clicked"

    },
    "QuizGroupView\0on_tbtAddShuffle_clicked\0"
    "\0on_tbtMoveDown_clicked\0on_tbtMoveUp_clicked\0"
    "on_tbtRemove_clicked\0on_tbtAddRandom_clicked\0"
    "on_tbtUpLevel_clicked\0on_table_cellDoubleClicked\0"
    "row\0column\0on_tbtProperties_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QuizGroupView[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x08 /* Private */,
       3,    0,   55,    2, 0x08 /* Private */,
       4,    0,   56,    2, 0x08 /* Private */,
       5,    0,   57,    2, 0x08 /* Private */,
       6,    0,   58,    2, 0x08 /* Private */,
       7,    0,   59,    2, 0x08 /* Private */,
       8,    2,   60,    2, 0x08 /* Private */,
      11,    0,   65,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    9,   10,
    QMetaType::Void,

       0        // eod
};

void QuizGroupView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QuizGroupView *_t = static_cast<QuizGroupView *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_tbtAddShuffle_clicked(); break;
        case 1: _t->on_tbtMoveDown_clicked(); break;
        case 2: _t->on_tbtMoveUp_clicked(); break;
        case 3: _t->on_tbtRemove_clicked(); break;
        case 4: _t->on_tbtAddRandom_clicked(); break;
        case 5: _t->on_tbtUpLevel_clicked(); break;
        case 6: _t->on_table_cellDoubleClicked((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 7: _t->on_tbtProperties_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject QuizGroupView::staticMetaObject = {
    { &QuizNodeView::staticMetaObject, qt_meta_stringdata_QuizGroupView.data,
      qt_meta_data_QuizGroupView,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QuizGroupView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QuizGroupView::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QuizGroupView.stringdata0))
        return static_cast<void*>(const_cast< QuizGroupView*>(this));
    return QuizNodeView::qt_metacast(_clname);
}

int QuizGroupView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QuizNodeView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
