# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/rahul/Documents/COP290Assignments/Task1/Subtask1

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/rahul/Documents/COP290Assignments/Task1/Subtask1

# Include any dependencies generated for this target.
include CMakeFiles/img.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/img.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/img.dir/flags.make

CMakeFiles/img.dir/img.cpp.o: CMakeFiles/img.dir/flags.make
CMakeFiles/img.dir/img.cpp.o: img.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/rahul/Documents/COP290Assignments/Task1/Subtask1/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/img.dir/img.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/img.dir/img.cpp.o -c /home/rahul/Documents/COP290Assignments/Task1/Subtask1/img.cpp

CMakeFiles/img.dir/img.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/img.dir/img.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/rahul/Documents/COP290Assignments/Task1/Subtask1/img.cpp > CMakeFiles/img.dir/img.cpp.i

CMakeFiles/img.dir/img.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/img.dir/img.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/rahul/Documents/COP290Assignments/Task1/Subtask1/img.cpp -o CMakeFiles/img.dir/img.cpp.s

# Object files for target img
img_OBJECTS = \
"CMakeFiles/img.dir/img.cpp.o"

# External object files for target img
img_EXTERNAL_OBJECTS =

img: CMakeFiles/img.dir/img.cpp.o
img: CMakeFiles/img.dir/build.make
img: /usr/local/lib/libopencv_gapi.so.4.5.1
img: /usr/local/lib/libopencv_stitching.so.4.5.1
img: /usr/local/lib/libopencv_aruco.so.4.5.1
img: /usr/local/lib/libopencv_bgsegm.so.4.5.1
img: /usr/local/lib/libopencv_bioinspired.so.4.5.1
img: /usr/local/lib/libopencv_ccalib.so.4.5.1
img: /usr/local/lib/libopencv_dnn_objdetect.so.4.5.1
img: /usr/local/lib/libopencv_dnn_superres.so.4.5.1
img: /usr/local/lib/libopencv_dpm.so.4.5.1
img: /usr/local/lib/libopencv_face.so.4.5.1
img: /usr/local/lib/libopencv_freetype.so.4.5.1
img: /usr/local/lib/libopencv_fuzzy.so.4.5.1
img: /usr/local/lib/libopencv_hfs.so.4.5.1
img: /usr/local/lib/libopencv_img_hash.so.4.5.1
img: /usr/local/lib/libopencv_intensity_transform.so.4.5.1
img: /usr/local/lib/libopencv_line_descriptor.so.4.5.1
img: /usr/local/lib/libopencv_mcc.so.4.5.1
img: /usr/local/lib/libopencv_quality.so.4.5.1
img: /usr/local/lib/libopencv_rapid.so.4.5.1
img: /usr/local/lib/libopencv_reg.so.4.5.1
img: /usr/local/lib/libopencv_rgbd.so.4.5.1
img: /usr/local/lib/libopencv_saliency.so.4.5.1
img: /usr/local/lib/libopencv_stereo.so.4.5.1
img: /usr/local/lib/libopencv_structured_light.so.4.5.1
img: /usr/local/lib/libopencv_superres.so.4.5.1
img: /usr/local/lib/libopencv_surface_matching.so.4.5.1
img: /usr/local/lib/libopencv_tracking.so.4.5.1
img: /usr/local/lib/libopencv_videostab.so.4.5.1
img: /usr/local/lib/libopencv_wechat_qrcode.so.4.5.1
img: /usr/local/lib/libopencv_xfeatures2d.so.4.5.1
img: /usr/local/lib/libopencv_xobjdetect.so.4.5.1
img: /usr/local/lib/libopencv_xphoto.so.4.5.1
img: /usr/local/lib/libopencv_shape.so.4.5.1
img: /usr/local/lib/libopencv_highgui.so.4.5.1
img: /usr/local/lib/libopencv_datasets.so.4.5.1
img: /usr/local/lib/libopencv_plot.so.4.5.1
img: /usr/local/lib/libopencv_text.so.4.5.1
img: /usr/local/lib/libopencv_ml.so.4.5.1
img: /usr/local/lib/libopencv_phase_unwrapping.so.4.5.1
img: /usr/local/lib/libopencv_optflow.so.4.5.1
img: /usr/local/lib/libopencv_ximgproc.so.4.5.1
img: /usr/local/lib/libopencv_video.so.4.5.1
img: /usr/local/lib/libopencv_videoio.so.4.5.1
img: /usr/local/lib/libopencv_dnn.so.4.5.1
img: /usr/local/lib/libopencv_imgcodecs.so.4.5.1
img: /usr/local/lib/libopencv_objdetect.so.4.5.1
img: /usr/local/lib/libopencv_calib3d.so.4.5.1
img: /usr/local/lib/libopencv_features2d.so.4.5.1
img: /usr/local/lib/libopencv_flann.so.4.5.1
img: /usr/local/lib/libopencv_photo.so.4.5.1
img: /usr/local/lib/libopencv_imgproc.so.4.5.1
img: /usr/local/lib/libopencv_core.so.4.5.1
img: CMakeFiles/img.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/rahul/Documents/COP290Assignments/Task1/Subtask1/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable img"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/img.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/img.dir/build: img

.PHONY : CMakeFiles/img.dir/build

CMakeFiles/img.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/img.dir/cmake_clean.cmake
.PHONY : CMakeFiles/img.dir/clean

CMakeFiles/img.dir/depend:
	cd /home/rahul/Documents/COP290Assignments/Task1/Subtask1 && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/rahul/Documents/COP290Assignments/Task1/Subtask1 /home/rahul/Documents/COP290Assignments/Task1/Subtask1 /home/rahul/Documents/COP290Assignments/Task1/Subtask1 /home/rahul/Documents/COP290Assignments/Task1/Subtask1 /home/rahul/Documents/COP290Assignments/Task1/Subtask1/CMakeFiles/img.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/img.dir/depend

