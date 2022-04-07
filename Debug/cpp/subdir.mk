################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../cpp/employee.cpp \
../cpp/fulltime.cpp \
../cpp/parttime.cpp 

CPP_DEPS += \
./cpp/employee.d \
./cpp/fulltime.d \
./cpp/parttime.d 

OBJS += \
./cpp/employee.o \
./cpp/fulltime.o \
./cpp/parttime.o 


# Each subdirectory must supply rules for building sources it contributes
cpp/%.o: ../cpp/%.cpp cpp/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
<<<<<<< HEAD
	g++ -I"/Users/hunter/eclipse-workspace/exam01/exam01/header" -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
=======
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
>>>>>>> d28c8f693afa62a305f75b1b3dd8b3c26f8ae339
	@echo 'Finished building: $<'
	@echo ' '


clean: clean-cpp

clean-cpp:
	-$(RM) ./cpp/employee.d ./cpp/employee.o ./cpp/fulltime.d ./cpp/fulltime.o ./cpp/parttime.d ./cpp/parttime.o

.PHONY: clean-cpp

