#ifndef LEARNING_H
#define LEARNING_H

#include "graph.h"
#include "input.h"

#include <spatialindex/SpatialIndex.h>


using namespace SpatialIndex;


namespace mmatch {


static const double ANGLE_WEIGHT = 0.5;
static const double DIST_WEIGHT = 0.5;



// maxError
//! compute maximum distance from the graph to gps coordinate
double maxDistance(const RoadGraph &graph, const Input &input, const Output &output);

//! compute average distance
double avgDistance(const RoadGraph &graph, const Input &input, const Output &output);


//! incremental algorithm
Output match(const RoadGraph &graph, ISpatialIndex *index, const Input &input);

//! incremental algo. with backtracing
Output backtracingMatch(const RoadGraph &graph, ISpatialIndex *index, const Input& input);


} // namespace mmatch



#endif // LEARNING_H
