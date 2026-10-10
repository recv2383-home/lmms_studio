/****************************************************************************
** Meta object code from reading C++ file 'Sf2Player.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.18)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../plugins/Sf2Player/Sf2Player.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Sf2Player.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.18. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_lmms__Sf2Instrument_t {
    QByteArrayData data[16];
    char stringdata0[196];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_lmms__Sf2Instrument_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_lmms__Sf2Instrument_t qt_meta_stringdata_lmms__Sf2Instrument = {
    {
QT_MOC_LITERAL(0, 0, 19), // "lmms::Sf2Instrument"
QT_MOC_LITERAL(1, 20, 11), // "fileLoading"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 11), // "fileChanged"
QT_MOC_LITERAL(4, 45, 12), // "patchChanged"
QT_MOC_LITERAL(5, 58, 8), // "openFile"
QT_MOC_LITERAL(6, 67, 8), // "_sf2File"
QT_MOC_LITERAL(7, 76, 15), // "updateTrackName"
QT_MOC_LITERAL(8, 92, 11), // "updatePatch"
QT_MOC_LITERAL(9, 104, 11), // "reloadSynth"
QT_MOC_LITERAL(10, 116, 14), // "updateReverbOn"
QT_MOC_LITERAL(11, 131, 12), // "updateReverb"
QT_MOC_LITERAL(12, 144, 14), // "updateChorusOn"
QT_MOC_LITERAL(13, 159, 12), // "updateChorus"
QT_MOC_LITERAL(14, 172, 10), // "updateGain"
QT_MOC_LITERAL(15, 183, 12) // "updateTuning"

    },
    "lmms::Sf2Instrument\0fileLoading\0\0"
    "fileChanged\0patchChanged\0openFile\0"
    "_sf2File\0updateTrackName\0updatePatch\0"
    "reloadSynth\0updateReverbOn\0updateReverb\0"
    "updateChorusOn\0updateChorus\0updateGain\0"
    "updateTuning"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_lmms__Sf2Instrument[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   79,    2, 0x06 /* Public */,
       3,    0,   80,    2, 0x06 /* Public */,
       4,    0,   81,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    2,   82,    2, 0x0a /* Public */,
       5,    1,   87,    2, 0x2a /* Public | MethodCloned */,
       8,    0,   90,    2, 0x0a /* Public */,
       9,    0,   91,    2, 0x0a /* Public */,
      10,    0,   92,    2, 0x0a /* Public */,
      11,    0,   93,    2, 0x0a /* Public */,
      12,    0,   94,    2, 0x0a /* Public */,
      13,    0,   95,    2, 0x0a /* Public */,
      14,    0,   96,    2, 0x0a /* Public */,
      15,    0,   97,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::Bool,    6,    7,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void lmms::Sf2Instrument::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Sf2Instrument *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->fileLoading(); break;
        case 1: _t->fileChanged(); break;
        case 2: _t->patchChanged(); break;
        case 3: _t->openFile((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 4: _t->openFile((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->updatePatch(); break;
        case 6: _t->reloadSynth(); break;
        case 7: _t->updateReverbOn(); break;
        case 8: _t->updateReverb(); break;
        case 9: _t->updateChorusOn(); break;
        case 10: _t->updateChorus(); break;
        case 11: _t->updateGain(); break;
        case 12: _t->updateTuning(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Sf2Instrument::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Sf2Instrument::fileLoading)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Sf2Instrument::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Sf2Instrument::fileChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Sf2Instrument::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Sf2Instrument::patchChanged)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject lmms::Sf2Instrument::staticMetaObject = { {
    QMetaObject::SuperData::link<Instrument::staticMetaObject>(),
    qt_meta_stringdata_lmms__Sf2Instrument.data,
    qt_meta_data_lmms__Sf2Instrument,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *lmms::Sf2Instrument::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *lmms::Sf2Instrument::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_lmms__Sf2Instrument.stringdata0))
        return static_cast<void*>(this);
    return Instrument::qt_metacast(_clname);
}

int lmms::Sf2Instrument::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Instrument::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
    return _id;
}

// SIGNAL 0
void lmms::Sf2Instrument::fileLoading()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void lmms::Sf2Instrument::fileChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void lmms::Sf2Instrument::patchChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
struct qt_meta_stringdata_lmms__gui__Sf2InstrumentView_t {
    QByteArrayData data[7];
    char stringdata0[107];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_lmms__gui__Sf2InstrumentView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_lmms__gui__Sf2InstrumentView_t qt_meta_stringdata_lmms__gui__Sf2InstrumentView = {
    {
QT_MOC_LITERAL(0, 0, 28), // "lmms::gui::Sf2InstrumentView"
QT_MOC_LITERAL(1, 29, 14), // "invalidateFile"
QT_MOC_LITERAL(2, 44, 0), // ""
QT_MOC_LITERAL(3, 45, 14), // "showFileDialog"
QT_MOC_LITERAL(4, 60, 15), // "showPatchDialog"
QT_MOC_LITERAL(5, 76, 14), // "updateFilename"
QT_MOC_LITERAL(6, 91, 15) // "updatePatchName"

    },
    "lmms::gui::Sf2InstrumentView\0"
    "invalidateFile\0\0showFileDialog\0"
    "showPatchDialog\0updateFilename\0"
    "updatePatchName"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_lmms__gui__Sf2InstrumentView[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x09 /* Protected */,
       3,    0,   40,    2, 0x09 /* Protected */,
       4,    0,   41,    2, 0x09 /* Protected */,
       5,    0,   42,    2, 0x09 /* Protected */,
       6,    0,   43,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void lmms::gui::Sf2InstrumentView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Sf2InstrumentView *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->invalidateFile(); break;
        case 1: _t->showFileDialog(); break;
        case 2: _t->showPatchDialog(); break;
        case 3: _t->updateFilename(); break;
        case 4: _t->updatePatchName(); break;
        default: ;
        }
    }
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject lmms::gui::Sf2InstrumentView::staticMetaObject = { {
    QMetaObject::SuperData::link<InstrumentViewFixedSize::staticMetaObject>(),
    qt_meta_stringdata_lmms__gui__Sf2InstrumentView.data,
    qt_meta_data_lmms__gui__Sf2InstrumentView,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *lmms::gui::Sf2InstrumentView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *lmms::gui::Sf2InstrumentView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_lmms__gui__Sf2InstrumentView.stringdata0))
        return static_cast<void*>(this);
    return InstrumentViewFixedSize::qt_metacast(_clname);
}

int lmms::gui::Sf2InstrumentView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = InstrumentViewFixedSize::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
