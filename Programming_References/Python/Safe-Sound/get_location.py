import time

# start time
start_time = time.time()

# the access token for the smart car API
access_token = ""

# Fetch the set of vehicles associated with this access
response = smartcar.get_vehicle_ids(access_token)

# Use the first vehicle
vehicle = smartcar.Vehicle(response["vehicles"][0], access_token)

# Fetch the vehicle's location
location = vehicle.location()
print(location)

# elapsed time
elapsed_time = time.time() - start_time

time = elapsed_time
