# Install script for directory: /home/ravic/Git/lmms

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/usr/local")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "RelWithDebInfo")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

# Set path to fallback-tool for dependency-resolution.
if(NOT DEFINED CMAKE_OBJDUMP)
  set(CMAKE_OBJDUMP "/usr/bin/objdump")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/lmms" TYPE FILE FILES
    "/home/ravic/Git/lmms/include/AboutDialog.h"
    "/home/ravic/Git/lmms/include/ActionGroup.h"
    "/home/ravic/Git/lmms/include/ArrayVector.h"
    "/home/ravic/Git/lmms/include/AudioAlsa.h"
    "/home/ravic/Git/lmms/include/AudioAlsaSetupWidget.h"
    "/home/ravic/Git/lmms/include/AudioBuffer.h"
    "/home/ravic/Git/lmms/include/AudioBufferView.h"
    "/home/ravic/Git/lmms/include/AudioBusHandle.h"
    "/home/ravic/Git/lmms/include/AudioDevice.h"
    "/home/ravic/Git/lmms/include/AudioDeviceSetupWidget.h"
    "/home/ravic/Git/lmms/include/AudioDummy.h"
    "/home/ravic/Git/lmms/include/AudioEngine.h"
    "/home/ravic/Git/lmms/include/AudioEngineProfiler.h"
    "/home/ravic/Git/lmms/include/AudioEngineWorkerThread.h"
    "/home/ravic/Git/lmms/include/AudioFileDevice.h"
    "/home/ravic/Git/lmms/include/AudioFileFlac.h"
    "/home/ravic/Git/lmms/include/AudioFileMP3.h"
    "/home/ravic/Git/lmms/include/AudioFileOgg.h"
    "/home/ravic/Git/lmms/include/AudioFileWave.h"
    "/home/ravic/Git/lmms/include/AudioJack.h"
    "/home/ravic/Git/lmms/include/AudioPortAudio.h"
    "/home/ravic/Git/lmms/include/AudioPulseAudio.h"
    "/home/ravic/Git/lmms/include/AudioResampler.h"
    "/home/ravic/Git/lmms/include/AudioSampleRecorder.h"
    "/home/ravic/Git/lmms/include/AudioSdl.h"
    "/home/ravic/Git/lmms/include/AudioSndio.h"
    "/home/ravic/Git/lmms/include/AutomatableButton.h"
    "/home/ravic/Git/lmms/include/AutomatableModel.h"
    "/home/ravic/Git/lmms/include/AutomatableModelView.h"
    "/home/ravic/Git/lmms/include/AutomatableSlider.h"
    "/home/ravic/Git/lmms/include/AutomationClip.h"
    "/home/ravic/Git/lmms/include/AutomationClipView.h"
    "/home/ravic/Git/lmms/include/AutomationEditor.h"
    "/home/ravic/Git/lmms/include/AutomationNode.h"
    "/home/ravic/Git/lmms/include/AutomationTrack.h"
    "/home/ravic/Git/lmms/include/AutomationTrackView.h"
    "/home/ravic/Git/lmms/include/BandLimitedWave.h"
    "/home/ravic/Git/lmms/include/BarModelEditor.h"
    "/home/ravic/Git/lmms/include/BasicFilters.h"
    "/home/ravic/Git/lmms/include/BufferManager.h"
    "/home/ravic/Git/lmms/include/CPULoadWidget.h"
    "/home/ravic/Git/lmms/include/CaptionMenu.h"
    "/home/ravic/Git/lmms/include/Clip.h"
    "/home/ravic/Git/lmms/include/ClipView.h"
    "/home/ravic/Git/lmms/include/Clipboard.h"
    "/home/ravic/Git/lmms/include/ColorChooser.h"
    "/home/ravic/Git/lmms/include/ColorHelper.h"
    "/home/ravic/Git/lmms/include/ComboBox.h"
    "/home/ravic/Git/lmms/include/ComboBoxModel.h"
    "/home/ravic/Git/lmms/include/ConfigManager.h"
    "/home/ravic/Git/lmms/include/ControlLayout.h"
    "/home/ravic/Git/lmms/include/Controller.h"
    "/home/ravic/Git/lmms/include/ControllerConnection.h"
    "/home/ravic/Git/lmms/include/ControllerConnectionDialog.h"
    "/home/ravic/Git/lmms/include/ControllerDialog.h"
    "/home/ravic/Git/lmms/include/ControllerRackView.h"
    "/home/ravic/Git/lmms/include/ControllerView.h"
    "/home/ravic/Git/lmms/include/Controls.h"
    "/home/ravic/Git/lmms/include/DataFile.h"
    "/home/ravic/Git/lmms/include/Delay.h"
    "/home/ravic/Git/lmms/include/DeprecationHelper.h"
    "/home/ravic/Git/lmms/include/DetuningHelper.h"
    "/home/ravic/Git/lmms/include/Draggable.h"
    "/home/ravic/Git/lmms/include/DrumSynth.h"
    "/home/ravic/Git/lmms/include/DspEffectLibrary.h"
    "/home/ravic/Git/lmms/include/DummyEffect.h"
    "/home/ravic/Git/lmms/include/DummyInstrument.h"
    "/home/ravic/Git/lmms/include/DummyPlugin.h"
    "/home/ravic/Git/lmms/include/Editor.h"
    "/home/ravic/Git/lmms/include/Effect.h"
    "/home/ravic/Git/lmms/include/EffectChain.h"
    "/home/ravic/Git/lmms/include/EffectControlDialog.h"
    "/home/ravic/Git/lmms/include/EffectControls.h"
    "/home/ravic/Git/lmms/include/EffectRackView.h"
    "/home/ravic/Git/lmms/include/EffectSelectDialog.h"
    "/home/ravic/Git/lmms/include/EffectView.h"
    "/home/ravic/Git/lmms/include/Engine.h"
    "/home/ravic/Git/lmms/include/EnvelopeAndLfoParameters.h"
    "/home/ravic/Git/lmms/include/EnvelopeAndLfoView.h"
    "/home/ravic/Git/lmms/include/EnvelopeGraph.h"
    "/home/ravic/Git/lmms/include/ExportFilter.h"
    "/home/ravic/Git/lmms/include/ExportProjectDialog.h"
    "/home/ravic/Git/lmms/include/FadeButton.h"
    "/home/ravic/Git/lmms/include/Fader.h"
    "/home/ravic/Git/lmms/include/FifoBuffer.h"
    "/home/ravic/Git/lmms/include/FileBrowser.h"
    "/home/ravic/Git/lmms/include/FileDialog.h"
    "/home/ravic/Git/lmms/include/FileRevealer.h"
    "/home/ravic/Git/lmms/include/FileSearchJob.h"
    "/home/ravic/Git/lmms/include/Flags.h"
    "/home/ravic/Git/lmms/include/FloatModelEditorBase.h"
    "/home/ravic/Git/lmms/include/FontHelper.h"
    "/home/ravic/Git/lmms/include/Graph.h"
    "/home/ravic/Git/lmms/include/GroupBox.h"
    "/home/ravic/Git/lmms/include/GuiApplication.h"
    "/home/ravic/Git/lmms/include/Hardware.h"
    "/home/ravic/Git/lmms/include/ImportFilter.h"
    "/home/ravic/Git/lmms/include/InlineAutomation.h"
    "/home/ravic/Git/lmms/include/Instrument.h"
    "/home/ravic/Git/lmms/include/InstrumentFunctionViews.h"
    "/home/ravic/Git/lmms/include/InstrumentFunctions.h"
    "/home/ravic/Git/lmms/include/InstrumentMidiIOView.h"
    "/home/ravic/Git/lmms/include/InstrumentPlayHandle.h"
    "/home/ravic/Git/lmms/include/InstrumentSoundShaping.h"
    "/home/ravic/Git/lmms/include/InstrumentSoundShapingView.h"
    "/home/ravic/Git/lmms/include/InstrumentTrack.h"
    "/home/ravic/Git/lmms/include/InstrumentTrackView.h"
    "/home/ravic/Git/lmms/include/InstrumentTrackWindow.h"
    "/home/ravic/Git/lmms/include/InstrumentTuningView.h"
    "/home/ravic/Git/lmms/include/InstrumentView.h"
    "/home/ravic/Git/lmms/include/IoHelper.h"
    "/home/ravic/Git/lmms/include/JournallingObject.h"
    "/home/ravic/Git/lmms/include/KeyboardShortcuts.h"
    "/home/ravic/Git/lmms/include/Keymap.h"
    "/home/ravic/Git/lmms/include/Knob.h"
    "/home/ravic/Git/lmms/include/Ladspa2LMMS.h"
    "/home/ravic/Git/lmms/include/LadspaBase.h"
    "/home/ravic/Git/lmms/include/LadspaControl.h"
    "/home/ravic/Git/lmms/include/LadspaControlView.h"
    "/home/ravic/Git/lmms/include/LadspaManager.h"
    "/home/ravic/Git/lmms/include/LcdFloatSpinBox.h"
    "/home/ravic/Git/lmms/include/LcdSpinBox.h"
    "/home/ravic/Git/lmms/include/LcdWidget.h"
    "/home/ravic/Git/lmms/include/LedCheckBox.h"
    "/home/ravic/Git/lmms/include/LeftRightNav.h"
    "/home/ravic/Git/lmms/include/LfoController.h"
    "/home/ravic/Git/lmms/include/LfoGraph.h"
    "/home/ravic/Git/lmms/include/LinkedModelGroupViews.h"
    "/home/ravic/Git/lmms/include/LinkedModelGroups.h"
    "/home/ravic/Git/lmms/include/LmmsCommonMacros.h"
    "/home/ravic/Git/lmms/include/LmmsPalette.h"
    "/home/ravic/Git/lmms/include/LmmsSemaphore.h"
    "/home/ravic/Git/lmms/include/LmmsStyle.h"
    "/home/ravic/Git/lmms/include/LmmsTypes.h"
    "/home/ravic/Git/lmms/include/LocaleHelper.h"
    "/home/ravic/Git/lmms/include/LocklessAllocator.h"
    "/home/ravic/Git/lmms/include/LocklessList.h"
    "/home/ravic/Git/lmms/include/LocklessRingBuffer.h"
    "/home/ravic/Git/lmms/include/Lv2Basics.h"
    "/home/ravic/Git/lmms/include/Lv2ControlBase.h"
    "/home/ravic/Git/lmms/include/Lv2Evbuf.h"
    "/home/ravic/Git/lmms/include/Lv2Features.h"
    "/home/ravic/Git/lmms/include/Lv2Manager.h"
    "/home/ravic/Git/lmms/include/Lv2Options.h"
    "/home/ravic/Git/lmms/include/Lv2Ports.h"
    "/home/ravic/Git/lmms/include/Lv2Proc.h"
    "/home/ravic/Git/lmms/include/Lv2SubPluginFeatures.h"
    "/home/ravic/Git/lmms/include/Lv2UridCache.h"
    "/home/ravic/Git/lmms/include/Lv2UridMap.h"
    "/home/ravic/Git/lmms/include/Lv2ViewBase.h"
    "/home/ravic/Git/lmms/include/Lv2Worker.h"
    "/home/ravic/Git/lmms/include/MainApplication.h"
    "/home/ravic/Git/lmms/include/MainWindow.h"
    "/home/ravic/Git/lmms/include/MeterDialog.h"
    "/home/ravic/Git/lmms/include/MeterModel.h"
    "/home/ravic/Git/lmms/include/Metronome.h"
    "/home/ravic/Git/lmms/include/MicroTimer.h"
    "/home/ravic/Git/lmms/include/Microtuner.h"
    "/home/ravic/Git/lmms/include/MicrotunerConfig.h"
    "/home/ravic/Git/lmms/include/Midi.h"
    "/home/ravic/Git/lmms/include/MidiAlsaRaw.h"
    "/home/ravic/Git/lmms/include/MidiAlsaSeq.h"
    "/home/ravic/Git/lmms/include/MidiApple.h"
    "/home/ravic/Git/lmms/include/MidiCCRackView.h"
    "/home/ravic/Git/lmms/include/MidiClient.h"
    "/home/ravic/Git/lmms/include/MidiClip.h"
    "/home/ravic/Git/lmms/include/MidiClipView.h"
    "/home/ravic/Git/lmms/include/MidiController.h"
    "/home/ravic/Git/lmms/include/MidiDummy.h"
    "/home/ravic/Git/lmms/include/MidiEvent.h"
    "/home/ravic/Git/lmms/include/MidiEventProcessor.h"
    "/home/ravic/Git/lmms/include/MidiEventToByteSeq.h"
    "/home/ravic/Git/lmms/include/MidiJack.h"
    "/home/ravic/Git/lmms/include/MidiPatch.h"
    "/home/ravic/Git/lmms/include/MidiPort.h"
    "/home/ravic/Git/lmms/include/MidiPortMenu.h"
    "/home/ravic/Git/lmms/include/MidiSetupWidget.h"
    "/home/ravic/Git/lmms/include/MidiSndio.h"
    "/home/ravic/Git/lmms/include/MidiWinMM.h"
    "/home/ravic/Git/lmms/include/MixHelpers.h"
    "/home/ravic/Git/lmms/include/Mixer.h"
    "/home/ravic/Git/lmms/include/MixerChannelLcdSpinBox.h"
    "/home/ravic/Git/lmms/include/MixerChannelView.h"
    "/home/ravic/Git/lmms/include/MixerView.h"
    "/home/ravic/Git/lmms/include/Model.h"
    "/home/ravic/Git/lmms/include/ModelView.h"
    "/home/ravic/Git/lmms/include/ModelVisitor.h"
    "/home/ravic/Git/lmms/include/NStateButton.h"
    "/home/ravic/Git/lmms/include/NoCopyNoMove.h"
    "/home/ravic/Git/lmms/include/Note.h"
    "/home/ravic/Git/lmms/include/NotePlayHandle.h"
    "/home/ravic/Git/lmms/include/Oscillator.h"
    "/home/ravic/Git/lmms/include/OscillatorConstants.h"
    "/home/ravic/Git/lmms/include/Oscilloscope.h"
    "/home/ravic/Git/lmms/include/OutputSettings.h"
    "/home/ravic/Git/lmms/include/OversamplingHelpers.h"
    "/home/ravic/Git/lmms/include/PathUtil.h"
    "/home/ravic/Git/lmms/include/PatternClip.h"
    "/home/ravic/Git/lmms/include/PatternClipView.h"
    "/home/ravic/Git/lmms/include/PatternEditor.h"
    "/home/ravic/Git/lmms/include/PatternStore.h"
    "/home/ravic/Git/lmms/include/PatternTrack.h"
    "/home/ravic/Git/lmms/include/PatternTrackView.h"
    "/home/ravic/Git/lmms/include/PeakController.h"
    "/home/ravic/Git/lmms/include/PeakIndicator.h"
    "/home/ravic/Git/lmms/include/PerfLog.h"
    "/home/ravic/Git/lmms/include/Piano.h"
    "/home/ravic/Git/lmms/include/PianoRoll.h"
    "/home/ravic/Git/lmms/include/PianoView.h"
    "/home/ravic/Git/lmms/include/Pitch.h"
    "/home/ravic/Git/lmms/include/PixmapButton.h"
    "/home/ravic/Git/lmms/include/PlayHandle.h"
    "/home/ravic/Git/lmms/include/Plugin.h"
    "/home/ravic/Git/lmms/include/PluginBrowser.h"
    "/home/ravic/Git/lmms/include/PluginFactory.h"
    "/home/ravic/Git/lmms/include/PluginIssue.h"
    "/home/ravic/Git/lmms/include/PluginView.h"
    "/home/ravic/Git/lmms/include/PositionLine.h"
    "/home/ravic/Git/lmms/include/PresetPreviewPlayHandle.h"
    "/home/ravic/Git/lmms/include/ProjectJournal.h"
    "/home/ravic/Git/lmms/include/ProjectNotes.h"
    "/home/ravic/Git/lmms/include/ProjectRenderer.h"
    "/home/ravic/Git/lmms/include/ProjectVersion.h"
    "/home/ravic/Git/lmms/include/QuadratureLfo.h"
    "/home/ravic/Git/lmms/include/RaiiHelpers.h"
    "/home/ravic/Git/lmms/include/RecentProjectsMenu.h"
    "/home/ravic/Git/lmms/include/RemotePlugin.h"
    "/home/ravic/Git/lmms/include/RemotePluginBase.h"
    "/home/ravic/Git/lmms/include/RemotePluginClient.h"
    "/home/ravic/Git/lmms/include/RenameDialog.h"
    "/home/ravic/Git/lmms/include/RenderManager.h"
    "/home/ravic/Git/lmms/include/RingBuffer.h"
    "/home/ravic/Git/lmms/include/RmsHelper.h"
    "/home/ravic/Git/lmms/include/RowTableView.h"
    "/home/ravic/Git/lmms/include/Rubberband.h"
    "/home/ravic/Git/lmms/include/Sample.h"
    "/home/ravic/Git/lmms/include/SampleBuffer.h"
    "/home/ravic/Git/lmms/include/SampleClip.h"
    "/home/ravic/Git/lmms/include/SampleClipView.h"
    "/home/ravic/Git/lmms/include/SampleDecoder.h"
    "/home/ravic/Git/lmms/include/SampleFrame.h"
    "/home/ravic/Git/lmms/include/SamplePlayHandle.h"
    "/home/ravic/Git/lmms/include/SampleRecordHandle.h"
    "/home/ravic/Git/lmms/include/SampleThumbnail.h"
    "/home/ravic/Git/lmms/include/SampleTrack.h"
    "/home/ravic/Git/lmms/include/SampleTrackView.h"
    "/home/ravic/Git/lmms/include/SampleTrackWindow.h"
    "/home/ravic/Git/lmms/include/Scale.h"
    "/home/ravic/Git/lmms/include/SendButtonIndicator.h"
    "/home/ravic/Git/lmms/include/SerializingObject.h"
    "/home/ravic/Git/lmms/include/SetupDialog.h"
    "/home/ravic/Git/lmms/include/SharedMemory.h"
    "/home/ravic/Git/lmms/include/SideBar.h"
    "/home/ravic/Git/lmms/include/SideBarWidget.h"
    "/home/ravic/Git/lmms/include/SimpleTextFloat.h"
    "/home/ravic/Git/lmms/include/Song.h"
    "/home/ravic/Git/lmms/include/SongEditor.h"
    "/home/ravic/Git/lmms/include/StepRecorder.h"
    "/home/ravic/Git/lmms/include/StepRecorderWidget.h"
    "/home/ravic/Git/lmms/include/StringPairDrag.h"
    "/home/ravic/Git/lmms/include/SubWindow.h"
    "/home/ravic/Git/lmms/include/SystemSemaphore.h"
    "/home/ravic/Git/lmms/include/TabBar.h"
    "/home/ravic/Git/lmms/include/TabButton.h"
    "/home/ravic/Git/lmms/include/TabWidget.h"
    "/home/ravic/Git/lmms/include/TemplatesMenu.h"
    "/home/ravic/Git/lmms/include/TempoSyncBarModelEditor.h"
    "/home/ravic/Git/lmms/include/TempoSyncKnob.h"
    "/home/ravic/Git/lmms/include/TempoSyncKnobModel.h"
    "/home/ravic/Git/lmms/include/TextFloat.h"
    "/home/ravic/Git/lmms/include/ThreadPool.h"
    "/home/ravic/Git/lmms/include/ThreadableJob.h"
    "/home/ravic/Git/lmms/include/TimeDisplayWidget.h"
    "/home/ravic/Git/lmms/include/TimeLineWidget.h"
    "/home/ravic/Git/lmms/include/TimePos.h"
    "/home/ravic/Git/lmms/include/Timeline.h"
    "/home/ravic/Git/lmms/include/ToolButton.h"
    "/home/ravic/Git/lmms/include/ToolPlugin.h"
    "/home/ravic/Git/lmms/include/ToolPluginView.h"
    "/home/ravic/Git/lmms/include/Track.h"
    "/home/ravic/Git/lmms/include/TrackContainer.h"
    "/home/ravic/Git/lmms/include/TrackContainerView.h"
    "/home/ravic/Git/lmms/include/TrackContentWidget.h"
    "/home/ravic/Git/lmms/include/TrackGrip.h"
    "/home/ravic/Git/lmms/include/TrackLabelButton.h"
    "/home/ravic/Git/lmms/include/TrackOperationsWidget.h"
    "/home/ravic/Git/lmms/include/TrackRenameLineEdit.h"
    "/home/ravic/Git/lmms/include/TrackView.h"
    "/home/ravic/Git/lmms/include/ValueBuffer.h"
    "/home/ravic/Git/lmms/include/VersionedSaveDialog.h"
    "/home/ravic/Git/lmms/include/VstPluginManager.h"
    "/home/ravic/Git/lmms/include/VstSyncController.h"
    "/home/ravic/Git/lmms/include/VstSyncData.h"
    "/home/ravic/Git/lmms/include/aeffectx.h"
    "/home/ravic/Git/lmms/include/base64.h"
    "/home/ravic/Git/lmms/include/embed.h"
    "/home/ravic/Git/lmms/include/endian_handling.h"
    "/home/ravic/Git/lmms/include/fenv.h"
    "/home/ravic/Git/lmms/include/fft_helpers.h"
    "/home/ravic/Git/lmms/include/interpolation.h"
    "/home/ravic/Git/lmms/include/ladspa.h"
    "/home/ravic/Git/lmms/include/lmms_constants.h"
    "/home/ravic/Git/lmms/include/lmms_math.h"
    "/home/ravic/Git/lmms/include/panning.h"
    "/home/ravic/Git/lmms/include/versioninfo.h"
    "/home/ravic/Git/lmms/include/volume.h"
    "/home/ravic/Git/lmms/build/lmmsconfig.h"
    "/home/ravic/Git/lmms/build/lmmsversion.h"
    "/home/ravic/Git/lmms/src/gui/embed.cpp"
    )
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/home/ravic/Git/lmms/build/cmake/cmake_install.cmake")
  include("/home/ravic/Git/lmms/build/src/cmake_install.cmake")
  include("/home/ravic/Git/lmms/build/plugins/cmake_install.cmake")
  include("/home/ravic/Git/lmms/build/tests/cmake_install.cmake")
  include("/home/ravic/Git/lmms/build/data/cmake_install.cmake")
  include("/home/ravic/Git/lmms/build/cmake/install/cmake_install.cmake")

endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
if(CMAKE_INSTALL_LOCAL_ONLY)
  file(WRITE "/home/ravic/Git/lmms/build/install_local_manifest.txt"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
endif()
if(CMAKE_INSTALL_COMPONENT)
  if(CMAKE_INSTALL_COMPONENT MATCHES "^[a-zA-Z0-9_.+-]+$")
    set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
  else()
    string(MD5 CMAKE_INST_COMP_HASH "${CMAKE_INSTALL_COMPONENT}")
    set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INST_COMP_HASH}.txt")
    unset(CMAKE_INST_COMP_HASH)
  endif()
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  file(WRITE "/home/ravic/Git/lmms/build/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
endif()
