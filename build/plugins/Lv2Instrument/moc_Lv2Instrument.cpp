/****************************************************************************
** Meta object code from reading C++ file 'Lv2Instrument.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.18)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../plugins/Lv2Instrument/Lv2Instrument.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Lv2Instrument.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.18. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_lmms__Lv2Instrument_t {
    QByteArrayData data[4];
    char stringdata0[51];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_lmms__Lv2Instrument_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_lmms__Lv2Instrument_t qt_meta_stringdata_lmms__Lv2Instrument = {
    {
QT_MOC_LITERAL(0, 0, 19), // "lmms::Lv2Instrument"
QT_MOC_LITERAL(1, 20, 12), // "modelChanged"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 16) // "updatePitchRange"

    },
    "lmms::Lv2Instrument\0modelChanged\0\0"
    "updatePitchRange"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_lmms__Lv2Instrument[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   25,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void lmms::Lv2Instrument::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Lv2Instrument *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->modelChanged(); break;
        case 1: _t->updatePitchRange(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Lv2Instrument::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Lv2Instrument::modelChanged)) {
                *result = 0;
                return;
            }
        }
    }
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject lmms::Lv2Instrument::staticMetaObject = { {
    QMetaObject::SuperData::link<Instrument::staticMetaObject>(),
    qt_meta_stringdata_lmms__Lv2Instrument.data,
    qt_meta_data_lmms__Lv2Instrument,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *lmms::Lv2Instrument::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *lmms::Lv2Instrument::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_lmms__Lv2Instrument.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Lv2ControlBase"))
        return static_cast< Lv2ControlBase*>(this);
    return Instrument::qt_metacast(_clname);
}

int lmms::Lv2Instrument::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Instrument::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void lmms::Lv2Instrument::modelChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
struct qt_meta_stringdata_lmms__gui__Lv2InsView_t {
    QByteArrayData data[1];
    char stringdata0[22];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_lmms__gui__Lv2InsView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_lmms__gui__Lv2InsView_t qt_meta_stringdata_lmms__gui__Lv2InsView = {
    {
QT_MOC_LITERAL(0, 0, 21) // "lmms::gui::Lv2InsView"

    },
    "lmms::gui::Lv2InsView"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_lmms__gui__Lv2InsView[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void lmms::gui::Lv2InsView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject lmms::gui::Lv2InsView::staticMetaObject = { {
    QMetaObject::SuperData::link<InstrumentView::staticMetaObject>(),
    qt_meta_stringdata_lmms__gui__Lv2InsView.data,
    qt_meta_data_lmms__gui__Lv2InsView,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *lmms::gui::Lv2InsView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *lmms::gui::Lv2InsView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_lmms__gui__Lv2InsView.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Lv2ViewBase"))
        return static_cast< Lv2ViewBase*>(this);
    return InstrumentView::qt_metacast(_clname);
}

int lmms::gui::Lv2InsView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = InstrumentView::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
