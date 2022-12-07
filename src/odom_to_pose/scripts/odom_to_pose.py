#! /usr/bin/env python3
import rospy
from geometry_msgs.msg import *
from nav_msgs.msg import *

pub = rospy.Publisher('/mavros/vision_pose/pose', PoseStamped, queue_size=10)
pub_cov = rospy.Publisher('/mavros/vision_pose/pose_cov', PoseWithCovarianceStamped, queue_size=10)

def odom_callback(data):
        pose = PoseStamped()
        pose_cov = PoseWithCovarianceStamped()
        pose.pose = data.pose.pose
        pose_cov.pose = data.pose
        pose.header.frame_id = "odom"
        pose_cov.header.frame_id = "odom"
        pub.publish(pose)
        pub_cov.publish(pose_cov)

if __name__ == "__main__":
        rospy.init_node("odom_to_pose", anonymous=False)

        rospy.Subscriber("/odom", Odometry, odom_callback)
        
        rospy.spin()
