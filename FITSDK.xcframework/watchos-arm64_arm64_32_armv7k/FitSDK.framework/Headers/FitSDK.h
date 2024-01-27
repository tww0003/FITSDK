//
//  FitSDK.h
//  FitSDK
//
//  Created by Tyler Williamson on 1/26/24.
//

#import <Foundation/Foundation.h>

//! Project version number for FitSDK.
FOUNDATION_EXPORT double FitSDKVersionNumber;

//! Project version string for FitSDK.
FOUNDATION_EXPORT const unsigned char FitSDKVersionString[];

// In this header, you should import all the public headers of your framework using statements like #import <FitSDK/PublicHeader.h>

#import <FitSDK/fit_accelerometer_data_mesg_listener.hpp>
#import <FitSDK/fit_accelerometer_data_mesg.hpp>
#import <FitSDK/fit_accumulated_field.hpp>
#import <FitSDK/fit_accumulator.hpp>
#import <FitSDK/fit_activity_mesg_listener.hpp>
#import <FitSDK/fit_activity_mesg.hpp>
#import <FitSDK/fit_ant_channel_id_mesg_listener.hpp>
#import <FitSDK/fit_ant_channel_id_mesg.hpp>
#import <FitSDK/fit_ant_rx_mesg_listener.hpp>
#import <FitSDK/fit_ant_rx_mesg.hpp>
#import <FitSDK/fit_ant_tx_mesg_listener.hpp>
#import <FitSDK/fit_ant_tx_mesg.hpp>
#import <FitSDK/fit_aviation_attitude_mesg_listener.hpp>
#import <FitSDK/fit_aviation_attitude_mesg.hpp>
#import <FitSDK/fit_barometer_data_mesg_listener.hpp>
#import <FitSDK/fit_barometer_data_mesg.hpp>
#import <FitSDK/fit_bike_profile_mesg_listener.hpp>
#import <FitSDK/fit_bike_profile_mesg.hpp>
#import <FitSDK/fit_blood_pressure_mesg_listener.hpp>
#import <FitSDK/fit_blood_pressure_mesg.hpp>
#import <FitSDK/fit_buffer_encode.hpp>
#import <FitSDK/fit_buffered_mesg_broadcaster.hpp>
#import <FitSDK/fit_buffered_record_mesg_broadcaster.hpp>
#import <FitSDK/fit_buffered_record_mesg_listener.hpp>
#import <FitSDK/fit_buffered_record_mesg.hpp>
#import <FitSDK/fit_cadence_zone_mesg_listener.hpp>
#import <FitSDK/fit_cadence_zone_mesg.hpp>
#import <FitSDK/fit_camera_event_mesg_listener.hpp>
#import <FitSDK/fit_camera_event_mesg.hpp>
#import <FitSDK/fit_capabilities_mesg_listener.hpp>
#import <FitSDK/fit_capabilities_mesg.hpp>
#import <FitSDK/fit_climb_pro_mesg_listener.hpp>
#import <FitSDK/fit_climb_pro_mesg.hpp>
#import <FitSDK/fit_config.hpp>
#import <FitSDK/fit_connectivity_mesg_listener.hpp>
#import <FitSDK/fit_connectivity_mesg.hpp>
#import <FitSDK/fit_course_mesg_listener.hpp>
#import <FitSDK/fit_course_mesg.hpp>
#import <FitSDK/fit_course_point_mesg_listener.hpp>
#import <FitSDK/fit_course_point_mesg.hpp>
#import <FitSDK/fit_crc.hpp>
#import <FitSDK/fit_date_time.hpp>
#import <FitSDK/fit_decode.hpp>
#import <FitSDK/fit_developer_data_id_mesg_listener.hpp>
#import <FitSDK/fit_developer_data_id_mesg.hpp>
#import <FitSDK/fit_developer_field_definition.hpp>
#import <FitSDK/fit_developer_field_description_listener.hpp>
#import <FitSDK/fit_developer_field_description.hpp>
#import <FitSDK/fit_developer_field.hpp>
#import <FitSDK/fit_device_aux_battery_info_mesg_listener.hpp>
#import <FitSDK/fit_device_aux_battery_info_mesg.hpp>
#import <FitSDK/fit_device_info_mesg_listener.hpp>
#import <FitSDK/fit_device_info_mesg.hpp>
#import <FitSDK/fit_device_settings_mesg_listener.hpp>
#import <FitSDK/fit_device_settings_mesg.hpp>
#import <FitSDK/fit_dive_alarm_mesg_listener.hpp>
#import <FitSDK/fit_dive_alarm_mesg.hpp>
#import <FitSDK/fit_dive_gas_mesg_listener.hpp>
#import <FitSDK/fit_dive_gas_mesg.hpp>
#import <FitSDK/fit_dive_settings_mesg_listener.hpp>
#import <FitSDK/fit_dive_settings_mesg.hpp>
#import <FitSDK/fit_dive_summary_mesg_listener.hpp>
#import <FitSDK/fit_dive_summary_mesg.hpp>
#import <FitSDK/fit_encode.hpp>
#import <FitSDK/fit_event_mesg_listener.hpp>
#import <FitSDK/fit_event_mesg.hpp>
#import <FitSDK/fit_exd_data_concept_configuration_mesg_listener.hpp>
#import <FitSDK/fit_exd_data_concept_configuration_mesg.hpp>
#import <FitSDK/fit_exd_data_field_configuration_mesg_listener.hpp>
#import <FitSDK/fit_exd_data_field_configuration_mesg.hpp>
#import <FitSDK/fit_exd_screen_configuration_mesg_listener.hpp>
#import <FitSDK/fit_exd_screen_configuration_mesg.hpp>
#import <FitSDK/fit_exercise_title_mesg_listener.hpp>
#import <FitSDK/fit_exercise_title_mesg.hpp>
#import <FitSDK/fit_factory.hpp>
#import <FitSDK/fit_field_base.hpp>
#import <FitSDK/fit_field_capabilities_mesg_listener.hpp>
#import <FitSDK/fit_field_capabilities_mesg.hpp>
#import <FitSDK/fit_field_definition.hpp>
#import <FitSDK/fit_field_description_mesg_listener.hpp>
#import <FitSDK/fit_field_description_mesg.hpp>
#import <FitSDK/fit_field.hpp>
#import <FitSDK/fit_file_capabilities_mesg_listener.hpp>
#import <FitSDK/fit_file_capabilities_mesg.hpp>
#import <FitSDK/fit_file_creator_mesg_listener.hpp>
#import <FitSDK/fit_file_creator_mesg.hpp>
#import <FitSDK/fit_file_id_mesg_listener.hpp>
#import <FitSDK/fit_file_id_mesg.hpp>
#import <FitSDK/fit_goal_mesg_listener.hpp>
#import <FitSDK/fit_goal_mesg.hpp>
#import <FitSDK/fit_gps_metadata_mesg_listener.hpp>
#import <FitSDK/fit_gps_metadata_mesg.hpp>
#import <FitSDK/fit_gyroscope_data_mesg_listener.hpp>
#import <FitSDK/fit_gyroscope_data_mesg.hpp>
#import <FitSDK/fit_hr_mesg_listener.hpp>
#import <FitSDK/fit_hr_mesg.hpp>
#import <FitSDK/fit_hr_zone_mesg_listener.hpp>
#import <FitSDK/fit_hr_zone_mesg.hpp>
#import <FitSDK/fit_hrm_profile_mesg_listener.hpp>
#import <FitSDK/fit_hrm_profile_mesg.hpp>
#import <FitSDK/fit_hrv_mesg_listener.hpp>
#import <FitSDK/fit_hrv_mesg.hpp>
#import <FitSDK/fit_jump_mesg_listener.hpp>
#import <FitSDK/fit_jump_mesg.hpp>
#import <FitSDK/fit_lap_mesg_listener.hpp>
#import <FitSDK/fit_lap_mesg.hpp>
#import <FitSDK/fit_length_mesg_listener.hpp>
#import <FitSDK/fit_length_mesg.hpp>
#import <FitSDK/fit_magnetometer_data_mesg_listener.hpp>
#import <FitSDK/fit_magnetometer_data_mesg.hpp>
#import <FitSDK/fit_memo_glob_mesg_listener.hpp>
#import <FitSDK/fit_memo_glob_mesg.hpp>
#import <FitSDK/fit_mesg_broadcast_plugin.hpp>
#import <FitSDK/fit_mesg_broadcaster.hpp>
#import <FitSDK/fit_mesg_capabilities_mesg_listener.hpp>
#import <FitSDK/fit_mesg_capabilities_mesg.hpp>
#import <FitSDK/fit_mesg_definition_listener.hpp>
#import <FitSDK/fit_mesg_definition.hpp>
#import <FitSDK/fit_mesg_listener.hpp>
#import <FitSDK/fit_mesg_with_event_broadcaster.hpp>
#import <FitSDK/fit_mesg_with_event_listener.hpp>
#import <FitSDK/fit_mesg_with_event.hpp>
#import <FitSDK/fit_mesg.hpp>
#import <FitSDK/fit_met_zone_mesg_listener.hpp>
#import <FitSDK/fit_met_zone_mesg.hpp>
#import <FitSDK/fit_monitoring_info_mesg_listener.hpp>
#import <FitSDK/fit_monitoring_info_mesg.hpp>
#import <FitSDK/fit_monitoring_mesg_listener.hpp>
#import <FitSDK/fit_monitoring_mesg.hpp>
#import <FitSDK/fit_nmea_sentence_mesg_listener.hpp>
#import <FitSDK/fit_nmea_sentence_mesg.hpp>
#import <FitSDK/fit_obdii_data_mesg_listener.hpp>
#import <FitSDK/fit_obdii_data_mesg.hpp>
#import <FitSDK/fit_ohr_settings_mesg_listener.hpp>
#import <FitSDK/fit_ohr_settings_mesg.hpp>
#import <FitSDK/fit_one_d_sensor_calibration_mesg_listener.hpp>
#import <FitSDK/fit_one_d_sensor_calibration_mesg.hpp>
#import <FitSDK/fit_pad_mesg_listener.hpp>
#import <FitSDK/fit_pad_mesg.hpp>
#import <FitSDK/fit_power_zone_mesg_listener.hpp>
#import <FitSDK/fit_power_zone_mesg.hpp>
#import <FitSDK/fit_profile.hpp>
#import <FitSDK/fit_protocol_validator.hpp>
#import <FitSDK/fit_record_mesg_listener.hpp>
#import <FitSDK/fit_record_mesg.hpp>
#import <FitSDK/fit_runtime_exception.hpp>
#import <FitSDK/fit_schedule_mesg_listener.hpp>
#import <FitSDK/fit_schedule_mesg.hpp>
#import <FitSDK/fit_sdm_profile_mesg_listener.hpp>
#import <FitSDK/fit_sdm_profile_mesg.hpp>
#import <FitSDK/fit_segment_file_mesg_listener.hpp>
#import <FitSDK/fit_segment_file_mesg.hpp>
#import <FitSDK/fit_segment_id_mesg_listener.hpp>
#import <FitSDK/fit_segment_id_mesg.hpp>
#import <FitSDK/fit_segment_lap_mesg_listener.hpp>
#import <FitSDK/fit_segment_lap_mesg.hpp>
#import <FitSDK/fit_segment_leaderboard_entry_mesg_listener.hpp>
#import <FitSDK/fit_segment_leaderboard_entry_mesg.hpp>
#import <FitSDK/fit_segment_point_mesg_listener.hpp>
#import <FitSDK/fit_segment_point_mesg.hpp>
#import <FitSDK/fit_session_mesg_listener.hpp>
#import <FitSDK/fit_session_mesg.hpp>
#import <FitSDK/fit_set_mesg_listener.hpp>
#import <FitSDK/fit_set_mesg.hpp>
#import <FitSDK/fit_slave_device_mesg_listener.hpp>
#import <FitSDK/fit_slave_device_mesg.hpp>
#import <FitSDK/fit_software_mesg_listener.hpp>
#import <FitSDK/fit_software_mesg.hpp>
#import <FitSDK/fit_speed_zone_mesg_listener.hpp>
#import <FitSDK/fit_speed_zone_mesg.hpp>
#import <FitSDK/fit_sport_mesg_listener.hpp>
#import <FitSDK/fit_sport_mesg.hpp>
#import <FitSDK/fit_stress_level_mesg_listener.hpp>
#import <FitSDK/fit_stress_level_mesg.hpp>
#import <FitSDK/fit_stress_level_mesg.hpp>
#import <FitSDK/fit_three_d_sensor_calibration_mesg_listener.hpp>
#import <FitSDK/fit_three_d_sensor_calibration_mesg.hpp>
#import <FitSDK/fit_timestamp_correlation_mesg_listener.hpp>
#import <FitSDK/fit_timestamp_correlation_mesg.hpp>
#import <FitSDK/fit_totals_mesg_listener.hpp>
#import <FitSDK/fit_totals_mesg.hpp>
#import <FitSDK/fit_training_file_mesg_listener.hpp>
#import <FitSDK/fit_training_file_mesg.hpp>
#import <FitSDK/fit_unicode.hpp>
#import <FitSDK/fit_user_profile_mesg_listener.hpp>
#import <FitSDK/fit_user_profile_mesg.hpp>
#import <FitSDK/fit_video_clip_mesg_listener.hpp>
#import <FitSDK/fit_video_clip_mesg.hpp>
#import <FitSDK/fit_video_description_mesg_listener.hpp>
#import <FitSDK/fit_video_description_mesg.hpp>
#import <FitSDK/fit_video_frame_mesg_listener.hpp>
#import <FitSDK/fit_video_frame_mesg.hpp>
#import <FitSDK/fit_video_mesg_listener.hpp>
#import <FitSDK/fit_video_mesg.hpp>
#import <FitSDK/fit_video_title_mesg_listener.hpp>
#import <FitSDK/fit_video_title_mesg.hpp>
#import <FitSDK/fit_watchface_settings_mesg_listener.hpp>
#import <FitSDK/fit_watchface_settings_mesg.hpp>
#import <FitSDK/fit_weather_alert_mesg_listener.hpp>
#import <FitSDK/fit_weather_alert_mesg.hpp>
#import <FitSDK/fit_weather_conditions_mesg_listener.hpp>
#import <FitSDK/fit_weather_conditions_mesg.hpp>
#import <FitSDK/fit_weight_scale_mesg_listener.hpp>
#import <FitSDK/fit_weight_scale_mesg.hpp>
#import <FitSDK/fit_workout_mesg_listener.hpp>
#import <FitSDK/fit_workout_mesg.hpp>
#import <FitSDK/fit_workout_session_mesg_listener.hpp>
#import <FitSDK/fit_workout_session_mesg.hpp>
#import <FitSDK/fit_workout_step_mesg_listener.hpp>
#import <FitSDK/fit_workout_step_mesg.hpp>
#import <FitSDK/fit_zones_target_mesg_listener.hpp>
#import <FitSDK/fit_zones_target_mesg.hpp>
#import <FitSDK/fit.hpp>
//#import <FitSDK/FitDecode.h>
//#import <FitSDK/FitEncode.h>
//#import <FitSDK/FitMesgDefinition.h>
//#import <FitSDK/FitMesg.h>
//#import <FitSDK/FitFieldDefinition.h>
//#import <FitSDK/FitField.h>
//#import <FitSDK/FitDeveloperField.h>
