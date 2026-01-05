# Creating a diagram similar to the one provided
fig, ax = plt.subplots(figsize=(10, 6))

# Defining voltage range for the breakdown characteristics
voltage = np.linspace(-20, 20, 400)

# Defining current characteristics for forward bias, Zener breakdown, and Avalanche breakdown
forward_current = np.piecewise(voltage, [voltage < 0, voltage >= 0], [0, lambda x: np.exp(x/2) - 1])
reverse_zener_current = np.piecewise(voltage, [voltage > -5, voltage <= -5], [0, lambda x: -np.exp(-x-5)])
reverse_avalanche_current = np.piecewise(voltage, [voltage > -15, voltage <= -15], [0, lambda x: -0.1 * (x + 15)**2])

# Plotting the characteristics
ax.plot(voltage, forward_current, label="Forward Bias", color="purple")
ax.plot(voltage, reverse_zener_current, label="Zener Breakdown", color="purple", linestyle='--')
ax.plot(voltage, reverse_avalanche_current, label="Avalanche Breakdown", color="purple", linestyle=':')

# Adding titles and labels
ax.set_title("Zener Breakdown vs Avalanche Breakdown Characteristics")
ax.set_xlabel("Voltage (V)")
ax.set_ylabel("Current (mA)")
ax.axhline(0, color='black',linewidth=0.5)
ax.axvline(0, color='black',linewidth=0.5)
ax.grid(True, which='both', linestyle='--', linewidth=0.5)
ax.legend()

# Adding key points
ax.annotate('Zener breakdown', xy=(-5, -1), xytext=(-15, -30),
            arrowprops=dict(facecolor='black', shrink=0.05))
ax.annotate('Avalanche breakdown', xy=(-15, -15), xytext=(-25, -70),
            arrowprops=dict(facecolor='black', shrink=0.05))

# Setting limits
ax.set_xlim([-20, 20])
ax.set_ylim([-80, 80])

# Saving the figure
plt.tight_layout()
plt.savefig("/mnt/data/Breakdown_Characteristics.png")
plt.show()