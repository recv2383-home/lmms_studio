/****************************************************************************
** Meta object code from reading C++ file 'Song.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.18)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../include/Song.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Song.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.18. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_lmms__Song_t {
    QByteArrayData data[46];
    char stringdata0[622];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_lmms__Song_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_lmms__Song_t qt_meta_stringdata_lmms__Song = {
    {
QT_MOC_LITERAL(0, 0, 10), // "lmms::Song"
QT_MOC_LITERAL(1, 11, 13), // "projectLoaded"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 20), // "playbackStateChanged"
QT_MOC_LITERAL(4, 47, 22), // "playbackPositionJumped"
QT_MOC_LITERAL(5, 70, 13), // "lengthChanged"
QT_MOC_LITERAL(6, 84, 4), // "bars"
QT_MOC_LITERAL(7, 89, 12), // "tempoChanged"
QT_MOC_LITERAL(8, 102, 11), // "lmms::bpm_t"
QT_MOC_LITERAL(9, 114, 6), // "newBPM"
QT_MOC_LITERAL(10, 121, 20), // "timeSignatureChanged"
QT_MOC_LITERAL(11, 142, 14), // "oldTicksPerBar"
QT_MOC_LITERAL(12, 157, 11), // "ticksPerBar"
QT_MOC_LITERAL(13, 169, 15), // "controllerAdded"
QT_MOC_LITERAL(14, 185, 17), // "lmms::Controller*"
QT_MOC_LITERAL(15, 203, 17), // "controllerRemoved"
QT_MOC_LITERAL(16, 221, 7), // "stopped"
QT_MOC_LITERAL(17, 229, 8), // "modified"
QT_MOC_LITERAL(18, 238, 22), // "projectFileNameChanged"
QT_MOC_LITERAL(19, 261, 16), // "scaleListChanged"
QT_MOC_LITERAL(20, 278, 5), // "index"
QT_MOC_LITERAL(21, 284, 17), // "keymapListChanged"
QT_MOC_LITERAL(22, 302, 8), // "playSong"
QT_MOC_LITERAL(23, 311, 6), // "record"
QT_MOC_LITERAL(24, 318, 13), // "playAndRecord"
QT_MOC_LITERAL(25, 332, 11), // "playPattern"
QT_MOC_LITERAL(26, 344, 12), // "playMidiClip"
QT_MOC_LITERAL(27, 357, 21), // "const lmms::MidiClip*"
QT_MOC_LITERAL(28, 379, 14), // "midiClipToPlay"
QT_MOC_LITERAL(29, 394, 4), // "loop"
QT_MOC_LITERAL(30, 399, 11), // "togglePause"
QT_MOC_LITERAL(31, 411, 4), // "stop"
QT_MOC_LITERAL(32, 416, 11), // "startExport"
QT_MOC_LITERAL(33, 428, 10), // "stopExport"
QT_MOC_LITERAL(34, 439, 11), // "setModified"
QT_MOC_LITERAL(35, 451, 12), // "clearProject"
QT_MOC_LITERAL(36, 464, 15), // "addPatternTrack"
QT_MOC_LITERAL(37, 480, 9), // "insertBar"
QT_MOC_LITERAL(38, 490, 9), // "removeBar"
QT_MOC_LITERAL(39, 500, 14), // "addSampleTrack"
QT_MOC_LITERAL(40, 515, 18), // "addAutomationTrack"
QT_MOC_LITERAL(41, 534, 8), // "setTempo"
QT_MOC_LITERAL(42, 543, 16), // "setTimeSignature"
QT_MOC_LITERAL(43, 560, 19), // "masterVolumeChanged"
QT_MOC_LITERAL(44, 580, 21), // "savePlayStartPosition"
QT_MOC_LITERAL(45, 602, 19) // "updateFramesPerTick"

    },
    "lmms::Song\0projectLoaded\0\0"
    "playbackStateChanged\0playbackPositionJumped\0"
    "lengthChanged\0bars\0tempoChanged\0"
    "lmms::bpm_t\0newBPM\0timeSignatureChanged\0"
    "oldTicksPerBar\0ticksPerBar\0controllerAdded\0"
    "lmms::Controller*\0controllerRemoved\0"
    "stopped\0modified\0projectFileNameChanged\0"
    "scaleListChanged\0index\0keymapListChanged\0"
    "playSong\0record\0playAndRecord\0playPattern\0"
    "playMidiClip\0const lmms::MidiClip*\0"
    "midiClipToPlay\0loop\0togglePause\0stop\0"
    "startExport\0stopExport\0setModified\0"
    "clearProject\0addPatternTrack\0insertBar\0"
    "removeBar\0addSampleTrack\0addAutomationTrack\0"
    "setTempo\0setTimeSignature\0masterVolumeChanged\0"
    "savePlayStartPosition\0updateFramesPerTick"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_lmms__Song[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      35,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      13,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  189,    2, 0x06 /* Public */,
       3,    0,  190,    2, 0x06 /* Public */,
       4,    0,  191,    2, 0x06 /* Public */,
       5,    1,  192,    2, 0x06 /* Public */,
       7,    1,  195,    2, 0x06 /* Public */,
      10,    2,  198,    2, 0x06 /* Public */,
      13,    1,  203,    2, 0x06 /* Public */,
      15,    1,  206,    2, 0x06 /* Public */,
      16,    0,  209,    2, 0x06 /* Public */,
      17,    0,  210,    2, 0x06 /* Public */,
      18,    0,  211,    2, 0x06 /* Public */,
      19,    1,  212,    2, 0x06 /* Public */,
      21,    1,  215,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      22,    0,  218,    2, 0x0a /* Public */,
      23,    0,  219,    2, 0x0a /* Public */,
      24,    0,  220,    2, 0x0a /* Public */,
      25,    0,  221,    2, 0x0a /* Public */,
      26,    2,  222,    2, 0x0a /* Public */,
      26,    1,  227,    2, 0x2a /* Public | MethodCloned */,
      30,    0,  230,    2, 0x0a /* Public */,
      31,    0,  231,    2, 0x0a /* Public */,
      32,    0,  232,    2, 0x0a /* Public */,
      33,    0,  233,    2, 0x0a /* Public */,
      34,    0,  234,    2, 0x0a /* Public */,
      35,    0,  235,    2, 0x0a /* Public */,
      36,    0,  236,    2, 0x0a /* Public */,
      37,    0,  237,    2, 0x08 /* Private */,
      38,    0,  238,    2, 0x08 /* Private */,
      39,    0,  239,    2, 0x08 /* Private */,
      40,    0,  240,    2, 0x08 /* Private */,
      41,    0,  241,    2, 0x08 /* Private */,
      42,    0,  242,    2, 0x08 /* Private */,
      43,    0,  243,    2, 0x08 /* Private */,
      44,    0,  244,    2, 0x08 /* Private */,
      45,    0,  245,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   11,   12,
    QMetaType::Void, 0x80000000 | 14,    2,
    QMetaType::Void, 0x80000000 | 14,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   20,
    QMetaType::Void, QMetaType::Int,   20,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 27, QMetaType::Bool,   28,   29,
    QMetaType::Void, 0x80000000 | 27,   28,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
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

void lmms::Song::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Song *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->projectLoaded(); break;
        case 1: _t->playbackStateChanged(); break;
        case 2: _t->playbackPositionJumped(); break;
        case 3: _t->lengthChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->tempoChanged((*reinterpret_cast< lmms::bpm_t(*)>(_a[1]))); break;
        case 5: _t->timeSignatureChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 6: _t->controllerAdded((*reinterpret_cast< lmms::Controller*(*)>(_a[1]))); break;
        case 7: _t->controllerRemoved((*reinterpret_cast< lmms::Controller*(*)>(_a[1]))); break;
        case 8: _t->stopped(); break;
        case 9: _t->modified(); break;
        case 10: _t->projectFileNameChanged(); break;
        case 11: _t->scaleListChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->keymapListChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 13: _t->playSong(); break;
        case 14: _t->record(); break;
        case 15: _t->playAndRecord(); break;
        case 16: _t->playPattern(); break;
        case 17: _t->playMidiClip((*reinterpret_cast< const lmms::MidiClip*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 18: _t->playMidiClip((*reinterpret_cast< const lmms::MidiClip*(*)>(_a[1]))); break;
        case 19: _t->togglePause(); break;
        case 20: _t->stop(); break;
        case 21: _t->startExport(); break;
        case 22: _t->stopExport(); break;
        case 23: _t->setModified(); break;
        case 24: _t->clearProject(); break;
        case 25: _t->addPatternTrack(); break;
        case 26: _t->insertBar(); break;
        case 27: _t->removeBar(); break;
        case 28: _t->addSampleTrack(); break;
        case 29: _t->addAutomationTrack(); break;
        case 30: _t->setTempo(); break;
        case 31: _t->setTimeSignature(); break;
        case 32: _t->masterVolumeChanged(); break;
        case 33: _t->savePlayStartPosition(); break;
        case 34: _t->updateFramesPerTick(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< lmms::Controller* >(); break;
            }
            break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< lmms::Controller* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Song::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Song::projectLoaded)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Song::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Song::playbackStateChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Song::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Song::playbackPositionJumped)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (Song::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Song::lengthChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (Song::*)(lmms::bpm_t );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Song::tempoChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (Song::*)(int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Song::timeSignatureChanged)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (Song::*)(lmms::Controller * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Song::controllerAdded)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (Song::*)(lmms::Controller * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Song::controllerRemoved)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (Song::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Song::stopped)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (Song::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Song::modified)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (Song::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Song::projectFileNameChanged)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (Song::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Song::scaleListChanged)) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (Song::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Song::keymapListChanged)) {
                *result = 12;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject lmms::Song::staticMetaObject = { {
    QMetaObject::SuperData::link<TrackContainer::staticMetaObject>(),
    qt_meta_stringdata_lmms__Song.data,
    qt_meta_data_lmms__Song,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *lmms::Song::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *lmms::Song::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_lmms__Song.stringdata0))
        return static_cast<void*>(this);
    return TrackContainer::qt_metacast(_clname);
}

int lmms::Song::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = TrackContainer::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 35)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 35;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 35)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 35;
    }
    return _id;
}

// SIGNAL 0
void lmms::Song::projectLoaded()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void lmms::Song::playbackStateChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void lmms::Song::playbackPositionJumped()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void lmms::Song::lengthChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void lmms::Song::tempoChanged(lmms::bpm_t _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void lmms::Song::timeSignatureChanged(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void lmms::Song::controllerAdded(lmms::Controller * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void lmms::Song::controllerRemoved(lmms::Controller * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void lmms::Song::stopped()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}

// SIGNAL 9
void lmms::Song::modified()
{
    QMetaObject::activate(this, &staticMetaObject, 9, nullptr);
}

// SIGNAL 10
void lmms::Song::projectFileNameChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 10, nullptr);
}

// SIGNAL 11
void lmms::Song::scaleListChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void lmms::Song::keymapListChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
