import numpy as np
import matplotlib.pyplot as plt

# Parameters
amplitude = 5          # Amplitude of the input signal
frequency = 1          # Frequency of the input signal (Hz)
time_period = 2        # Time period for one full cycle (seconds)
num_points = 1000      # Number of points in the waveform
diode_forward_voltage = 0.7  # Forward voltage drop of the diode (in volts)

# Time axis
time = np.linspace(0, time_period, num_points)

# Input signal (sine wave)
input_signal = amplitude * np.sin(2 * np.pi * frequency * time)

# Output signal (after clipping)
output_signal = np.where(input_signal >= 0, input_signal - diode_forward_voltage, 0)

# Plotting the input and output signals
plt.figure(figsize=(10, 6))
plt.plot(time, input_signal, label='Input Signal (Sine Wave)', color='blue')
plt.plot(time, output_signal, label='Output Signal (Series Negative Clipper)', color='red')
plt.axhline(0, color='black', linewidth=0.5)  # Reference line at 0V

plt.title('Series Negative Clipper')
plt.xlabel('Time (s)')
plt.ylabel('Voltage (V)')
plt.legend()
plt.grid(True)
plt.show()